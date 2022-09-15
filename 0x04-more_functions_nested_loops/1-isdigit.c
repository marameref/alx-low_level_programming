#include <ctype.h>
#include "main.h"
/**
 * _isdigit - A function that checks for a digit.
 *
 * @c: is the character to  check
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	int a = isdigit(c);

	if (a == 0)
		return (a);
	else
		return (1);
}
