#include "hash_tables.h"

/**
 * hash_table_create  - function that creates a hash table with a
 * specified size
 * @size: Unsigned long int denoting size of hash table to be created
 * Return: pointer to the newly created hash table of struct type
 * hash_table_t, returns NULL if an error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	return (table);
}
