#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define G_MIN 33
#define G_MAX 126
/**
 * main - generate valid passwords for 101-crackme
 * Return: 0 is run with success
 */

int main(void)
{
	int sum = 2772;
	char c;

	srand(time(NULL));
	while (sum > G_MAX)
	{
		c = rand() % (G_MAX - G_MIN) + G_MIN;
		sum -= c;
		if (sum < G_MIN)
		{
			c -= (G_MIN - sum);
			sum = G_MIN;
		}
		putchar(c);
	}
	putchar(sum);
	return (0);
}
