#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Pointer of type hash_table_t for hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *temp2;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];

			while (temp != NULL)
			{
				temp2 = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = temp2;
			}
		}
	}

	free(ht->array);
	free(ht);
}
