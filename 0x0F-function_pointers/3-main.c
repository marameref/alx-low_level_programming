#include "3-calc.h"
/**
 * main -  program that performs simple operations.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success otherwise exit with error number
 */
int main(int argc, char *argv[])
{
	int a, b;
	/* @p is a function pointer that point to the given operation */
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == op_div || p == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(a, b));
	return (0);
}
