#include "main.h"

/**
 * _strlen_recursion - function that return the length of a string
 * @s: the string
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * palcheck - checker
 * @x: iterration
 * @y: length of s
 * @s: string
 * Return: 1 or 0
 */
int palcheck(int x, int y, char *s)
{
	if (x >= y)
		return (1);
	if (*(s + x) != *(s + y - x))
		return (0);
	return (palcheck(x + 1, y, s));
}
/**
 * is_palindrome - check if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (palcheck(0, i - 1, s));
}
