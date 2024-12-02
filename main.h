#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /*for varyadic functions*/
#include <stdlib.h> /*for malloc and NULL*/
#include <unistd.h> /*for write*/
#include <limits.h> /* for test cases*/

/**
 * struct var_cases - var for the special cases
 * @match: after finding the percentage character to match
 * @function: the associated function to be called in
 */

typedef struct var_cases
{
char *match;
int (*function)(va_list);
} spc_t;

int _printf(const char *format, ...);

/*writes the character c to stdout*/
int _putchar(char c);

/*search for match and execute the function according to this*/
int (*var_character(const char *next, int nextp))(va_list);

/*prints a char*/
int print_char(va_list c);

/*prints a string */
int print_string(va_list s);

/*converts a string to an integer and prints its content.*/
int print_number(va_list n);


#endif /* MAIN_H */
