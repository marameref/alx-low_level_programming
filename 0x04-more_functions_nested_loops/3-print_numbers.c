#include "main.h"
/**
 * print_numbers - A function who print the numbers, from 0 to 9
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
