#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, tmp, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
