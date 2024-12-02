#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for variadic functions */
#include <stdlib.h> /* for malloc and NULL */
#include <unistd.h> /* for write */
#include <limits.h> /* for test cases */

/**
 * struct var_cases - Struct for special cases
 * @match: After finding the percentage character to match
 * @function: The associated function to be called
 */
typedef struct var_cases
{
char *match;
int (*function)(va_list);
} spc_t;

int _printf(const char *format, ...);

/* Writes the character c to stdout */
int _putchar(char c);

/* Searches for match and executes the associated function */
int (*var_character(const char *next, int nextp))(va_list);

/* Prints a char */
int print_char(va_list c);

/* Prints a string */
int print_string(va_list s);

/* Converts a string to an integer and prints its content */
int print_number(va_list n);

/* Helper function to handle format specifiers */
int handle_specifier(char spec, va_list args);

/* Prints a single character */
int print_char_direct(char c);

/* Prints a string directly */
int print_string_direct(char *str);

#endif /* MAIN_H */

