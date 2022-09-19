#include "main.h"

/*
 * _strlen - return the length of a string
 * @s: string to check
 * Return: the length of a string in int
 */

int_strlen(char *s)
{
	int length = 0;

	while (s[length])

	length++;

	return (length);
}
