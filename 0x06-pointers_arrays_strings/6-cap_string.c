#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to change
 * Return: string changed
 */

char *cap_string(char *str)
{
	int i = 0, j = 0, tmp = 0;
	char sep[] = {'\n', ' ', '\t', ',', ';', '"',
		'(', ')', '{', '}', '?', '!', '.'};

	while (str[i] != '\0')
	{
		tmp = 0;
		for (j = 0; sep[j] != '\0' && i != 0; j++)
		{
			if (str[i - 1] == sep[j])
			{
				tmp = 1;
				break;
			}
		}
		if (i == 0 || tmp == 1)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}
		i++;
	}

	return (str);
}
