#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *@n: integer
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k, l = 0;

	for (k = 0; dest[k] != '\0'; k++)
	{
		l++;

	}

	for (k = l, j = 0; src[j] != '\0' && j < n; j++, k++)
	{
		dest[k] = src[j];
	}
	dest[k] = '\0';

	return (dest);

}
