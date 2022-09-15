#include "main.h"
/**
 * print_line - A function who print lines n times
 *
 * @n: number of times to print line
 *
 * Return: Does not return anything
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
