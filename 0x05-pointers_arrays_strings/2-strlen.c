#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
