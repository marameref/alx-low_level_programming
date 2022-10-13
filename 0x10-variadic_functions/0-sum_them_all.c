#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *  @n: the number of parameters
 *
 * Return: the sum or 0 if @n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	int nplus, sum = 0;
	unsigned int args = 0;

	va_start(args_ptr, n);
	if (n == 0)
		return (0);
	while (args < n)
	{
		nplus = va_arg(args_ptr, int);
		sum = sum + nplus;
		args++;
	}
	va_end(args_ptr);
	return (sum);
}
