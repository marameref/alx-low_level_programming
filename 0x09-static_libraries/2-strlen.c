#include "main.h"
/**
 * _strlen - return the length of the string
 *@s: char type pointer
 *Return: length of string
 */
int _strlen(char *s)
{
	int i, compt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		compt++;
	}

	return (compt);

}
