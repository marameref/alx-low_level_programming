#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
