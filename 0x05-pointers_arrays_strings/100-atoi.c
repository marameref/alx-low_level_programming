#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: the converted value in int
 */

int _atoi(char *s)
{
	int a = 0, digit = 0, num = 0, signe = 0, count = 0, length = 0;

	while (s[length] != '\0')
		length++;
	while (count < length && a == 0)
	{
		if (s[count] == '-')
			++signe;
		if (s[count] >= '0' && s[count] <= '9')
		{
			digit = s[count] - '0';
			if (signe % 2)
				digit = -digit;
			num = num * 10 + digit;
			a = 1;
			if (s[count + 1] < '0' || s[count + 1] > '9')
				break;
			a = 0;
		}
		count++;
	}
	if (a == 0)
		return (0);
	return (num);
}
