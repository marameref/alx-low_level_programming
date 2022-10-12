#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string as a name
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
