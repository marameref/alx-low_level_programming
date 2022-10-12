#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - number of bytes
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0
 **/

int main(int argc, char *argv[])
{
	int byte, i;
	int (*code_addr)(int, char **) = main;
	unsigned char code;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byte; i++)
	{
		code = *(unsigned char *)code_addr;
		printf("%.2x", code);
		code_addr++;
		if (i != byte - 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
