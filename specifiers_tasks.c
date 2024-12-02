#include "main.h"

/*this will help with formats and call the right function*/

/**
 * handle_specifier - helper function for formats specifier
 * @spec: The specifier character
 * @args: The argument list
 *
 * Return: the specified format
 */

int handle_specifier(char spec, va_list args)
{
	if (spec == 'c')
		return (print_char(va_arg(args, int)));

	else if (spec == 's')
		return (print_string(va_arg(args, char *)));

	else if (spec == '%')
		return (write(1, "%", 1));

	return (0);
}
