#include "main.h"
/**
 * print_number - prints an integer
 * @na: integer to print
 * Return: nothing
 */
void print_number(int na)
{
	unsigned int pc, i, z, nmodul, n;

	if (na == 0)
		_putchar('0');
	/* if n is negative we make it positive*/
	if (na < 0)
	{
		n = -na;
		_putchar('-');
	}
	else
		n = na;
	if (n < 10 && n > 0)
		_putchar(n + '0');
	while (n >= 10)
	{
		pc = n;
		z = 0;
		nmodul = 0;
		for (i = 0; pc >= 10; i++)
		{
			if (pc / 10 > 0 && pc % 10 == 0)
				z++;
			else
				z = 0;
			pc /= 10;
			nmodul =  (nmodul) ? nmodul * 10 : 10;
		}
		_putchar(pc + '0');
		while (z-- > 0)
			_putchar('0');
		n %= nmodul;
		if (n > 0 && n < 10)
			_putchar(n + '0');
	}
}
