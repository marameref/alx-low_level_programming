#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: Double pointer of type hash_table_t for hash table
 * @key: Const char pointer for unique value to be searched for
 * Return: The value associated with the element found, NULL if key couldn't be
 * found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
