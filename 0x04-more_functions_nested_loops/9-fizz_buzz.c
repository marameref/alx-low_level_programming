#include <stdio.h>
/**
 * main  - the entry point
 *
 * Return: 0 if the program run with success
 */
int main(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 1; a < 101; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 && c == 0)
			printf("FizzBuzz");
		else if (c == 0 && b != 0)
			printf("Buzz");
		else if (b == 0 && c != 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
