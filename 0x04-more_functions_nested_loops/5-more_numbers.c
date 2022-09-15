#include "main.h"
/**
 * more_numbers - A function who print 10 times the numbers, from 0 to 14
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (j = 0; j < 10; j++)
	{
		k = 0;
		l = 0;
		for (i = 48; i < 63; i++)
		{
			if (!(i > 57))
				l = i;
			else
			{
				l = i - 10;
				k = 49;
				_putchar(k);
			}
			_putchar(l);
		}
		_putchar('\n');
	}
}
