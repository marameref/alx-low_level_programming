#include "main.h"
/**
 * print_diagonal - A function who print diagonal line n times
 *
 * @n: number of times to print diagonal line
 *
 * Return: Does not return anything
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
