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
/**
 *  print_all - prints anything
 * @format: list of types per arguments passed
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, p = 0;
	void (*fun)(va_list);
	va_list p_arg;
	f_print fp_get[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_strings},
		{'\0', NULL},
	};

	va_start(p_arg, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (fp_get[i].c == format[j])
			{
				fun = fp_get[i].pf;
				if (p != 0)
					printf(", ");
				fun(p_arg);
				p = 1;
				break;
			}
			i++;
			fun = NULL;
		}
		j++;
	}
	printf("\n");
	va_end(p_arg);
}
