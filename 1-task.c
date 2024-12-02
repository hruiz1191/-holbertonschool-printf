#include "main.h"

/**
 * print_numbers - converts a string to an integer and prints
 * its content.
 * @n: variadic argument brought from printf function
 * Return: amount of characters printed
 */
int print_number(va_list n)
{
	int i, var = 1, length = 0;
	unsigned int nextp;

	i = va_arg(n, int);

	if (i < 0)
	{
		_putchar('-');
		nextp = i * -1;
		length++;
	}
	else
	{
		nextp = i;
	}

	while (nextp / var > 9)
	{
		var = var * 10;
	}
	while (var != 0)
	{
		length = length + _putchar(nextp / var + '0');
		nextp = nextp % var;
		var = var / 10;
	}
	return (length);
}
