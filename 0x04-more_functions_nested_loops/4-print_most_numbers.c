#include "main.h"
/**
 * print_most_numbers - A function who print the numbers, from 0 to 9
 * except 2 and 4.
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (!(i == 50 || i == 52))
			_putchar(i);
	}
	_putchar('\n');
}
