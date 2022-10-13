#include "variadic_functions.h"
/**
 * p_char - print a character
 * @arg: argument to print
 * Return: Nothing
 */
void p_char(va_list arg)
{
	printf("%c", (char)va_arg(arg, int));
}
/**
 * p_int - print an integer
 * @arg: argument to print
 * Return: Nothing
 */
void p_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * p_float - print float
 * @arg: argument to print
 * Return: Nothing
 */
void p_float(va_list arg)
{
	printf("%f", (double)va_arg(arg, double));
}
/**
 * p_strings - print strings
 * @arg: argument to print
 * Return: Nothing
 */
void p_strings(va_list arg)
{
	char *s = (char *)va_arg(arg, char *);

	printf("%s", (s) ? s : "(nil)");
}
