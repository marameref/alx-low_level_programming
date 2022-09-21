#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second string
 * Return: an integer as difference of last character
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0'; i++)
		;
	diff = s1[i] - s2[i];
	return (diff);
}
