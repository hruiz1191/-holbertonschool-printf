#include "main.h"
/**
 * var_character - search  match and execute for the associate function
 * @next: the character to match
 * @nextp: the position of next
 * Return: if true match else NULL
 **/
int (*var_character(const char *next, int nextp))(va_list)
{
	int i;
	spc_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL}
	};

	for (i = 0; *(options[i].match) != '\0'; i++)
		if (options[i].match[0] == next[nextp])
			return (options[i].function);
	return (NULL);
}
