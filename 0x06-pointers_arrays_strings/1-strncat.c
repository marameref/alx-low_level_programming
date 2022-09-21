#include "main.h"
/**
 * _strncat - concatenates two strings
 * use at most @n bytes from @src
 * @dest: the resulting string
 * @src: string to add to @dest
 * @n: number of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
