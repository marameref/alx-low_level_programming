#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: Double pointer of type hash_table_t for hash table
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, first_flag = 0;

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (first_flag == 1)
				printf(", ");

			temp = ht->array[i];

			while (temp != NULL)
			{
				if (temp->next == NULL)
				{
					printf("'%s': ", temp->key);
					printf("'%s'", temp->value);
					break;
				}
				printf("'%s': '%s', ", temp->key, temp->value);
				temp = temp->next;
			}
			first_flag = 1;
		}

		if (ht->array[i] == NULL)
			continue;
	}
	printf("}\n");
}
