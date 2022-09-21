#include "main.h"

/**
 * leet - encodes a string into 1337 replaced:
 * a,A to 4 e,E to 3 o,O to 0 t,T to 7 l,L to 1
 * @str: string to encode
 * Return: a pointer to the encoded string
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char s1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int s2[] = {4, 3, 0, 7, 1, 4, 3, 0, 7, 1};

	while (str[i] != '\0')
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j] + 48;
		}
		i++;
	}
	return (str);
}
