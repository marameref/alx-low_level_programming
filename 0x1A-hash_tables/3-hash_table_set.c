#include "hash_tables.h"

/**
 * make_node - function that mallocs and inserts the new node values
 * @key: Const char pointer for unique value to be added
 * @value: Const char pointer for associated value with key to be added
 * Return: hash_node_t pointer address if successful, NULL otherwise
 */

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}


/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Double pointer of type hash_table_t for hash table
 * @key: Const char pointer for unique value to be added
 * @value: Const char pointer for associated value with key to be added
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	new = make_node(key, value);

	if (new == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}

	head = ht->array[index];
	temp = head;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = new->value;
			free(new->key);
			free(new);
			return (1);
		}
		temp = temp->next;
	}

	new->next = head;
	ht->array[index] = new;

	return (1);
}
