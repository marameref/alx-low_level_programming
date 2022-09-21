#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: point to destinatin
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
