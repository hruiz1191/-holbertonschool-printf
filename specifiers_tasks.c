#include "main.h"

/*this will help with formats and call the right function*/

/**
 * handle_specifier - helper function for formats specifier
 * @spec: specified character
 * @args: argument list
 *
 * Return: the specified format
 */

int handle_specifier(char spec, va_list args)
{
	if (spec == 'c')
		return (print_char(args));

	else if (spec == 's')
		return (print_string(args));

	else if (spec == '%')
		return (_putchar('%'));

	else if (spec == 'd' || spec == 'i')
		return (print_number(args));

	return (0);
}
