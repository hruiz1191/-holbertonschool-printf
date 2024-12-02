#include "main.h"
/**
 * _printf - format ind print data
 * @str: string to print
 * Return: length, or -1
 */
int _printf(const char *str, ...)
{
	va_list fcall;
	unsigned int i, length = 0;

	va_start(fcall, str);

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == '%')
			{
				_putchar('%');
				i = i + 1;
				length++;
			}
			else if ((*var_character)(str, i + 1) != NULL)
			{
				length += var_character(str, i + 1)(fcall);
				i = i + 1;
			}
			else
			{
				_putchar(str[i]);
				length++;
			}
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}
	va_end(fcall);
	return (length);
}
