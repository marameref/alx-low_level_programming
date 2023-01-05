#include "hash_tables.h"


/**
 * key_index - function that gives the index of a key.
 * @key: Const unsigned char - unique value passed
 * @size: Unsigned long int - size of array
 * Return: Unsigned long int of index where the key is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);

}
