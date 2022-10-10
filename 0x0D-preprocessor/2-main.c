#include <stdio.h>
/**
 * main - prints the name of the file it was
 * compiled from, followes by anew line.
 * Return: 0 if success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
