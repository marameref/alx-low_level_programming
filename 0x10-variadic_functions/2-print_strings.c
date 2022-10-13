#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to print between strings
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_ptr;
	char *s_arg;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, n);
	while (i < n)
	{
		s_arg = va_arg(arg_ptr, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (s_arg != NULL)
			printf("%s", s_arg);
		else
			printf("(nil)");
		i++;
	}
	va_end(arg_ptr);
	printf("\n");
}
