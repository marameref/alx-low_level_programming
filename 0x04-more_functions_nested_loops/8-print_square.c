#include "main.h"
/**
 * print_square - A function who print a square
 *
 * @size: size of square
 *
 * Return: Does not return anything
 */
void print_square(int size)
{
	int i, j;
	int n = size;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
