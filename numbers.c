#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - prints num
 * @args: argument
 *
 * Return: numbers
 */

int print_number(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digits = 0;
	int pow10 = 1;

	n /= 10;
	if (last < 0)
	{
		_putchar('-');
		n = -n;
		last = -last;
		digits++;
	}

	num = n;
	while (num > 0)
	{
		pow10 *= 10;
		num /= 10;
	}

	while (pow10 > 1)
	{
		pow10 /=10;
		_putchar((n / pow10) + '0');
		n %= pow10;
		digits++;
	}

	_putchar(last + '0');
	digits++;
	return (digits);

}

