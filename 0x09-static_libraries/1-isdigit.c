#include "main.h"

/**
*_isdigit - a function that checks for digit
*@c: a character
*Return: 1 if int c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
