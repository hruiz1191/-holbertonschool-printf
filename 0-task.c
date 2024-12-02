#include "main.h"
/**
 * print_string - prints a string
 * @str: the variadic argument from the printf function
 * Return: amount of characters printed
 **/
int print_string(va_list str)
{
	char *string;
	int i;

	string = va_arg(str, char *);
	if (*string == '\0')
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}

/**
 *print_char - prints a char
 *@c: the variadic argument from the printf function
 *Return: amount of characters printed (one).
 **/
int print_char(va_list c)
{
	char character = (char) va_arg(c, int);

	_putchar (character);
	return (1);
}
