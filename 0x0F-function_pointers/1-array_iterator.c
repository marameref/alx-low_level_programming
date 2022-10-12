#include "function_pointers.h"
/**
 * array_iterator - execute a function on array's element
 *  @array: array
 *  @size: size of the array
 *  @action: function to execute
 *  Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
