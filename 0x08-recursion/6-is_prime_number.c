#include "main.h"

/**
 * prime_check - verify if s is the square root of c
 * @s: parameter
 * @c: number to find if is a prime numberr
 * Return: 1 or 0
 */

int prime_check(int s, int c)
{
	if (s * s > c)
		return (1);
	if (c % s == 0)
		return (0);
	return (prime_check(s + 1, c));
}
/**
 * is_prime_number - function that checks if n is a prime number
 * @n: parameter
 * Return: 1 if n is prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
