#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct pt - Struct of printer type
 *
 * @c: Type to print
 * @pf: The function associated
 */
typedef struct pt
{
	char c;
	void (*pf)(va_list);
} f_print;

void (*get_printer(char f))(va_list);
void p_strings(va_list arg);
void p_float(va_list arg);
void p_int(va_list arg);
void p_char(va_list arg);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
