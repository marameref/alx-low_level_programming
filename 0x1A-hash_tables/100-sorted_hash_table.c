#include "hash_tables.h"

/**
 * shash_table_create  - function that creates a hash table with a
 * specified size
 * @size: Unsigned long int denoting size of hash table to be created
 * Return: pointer to the newly created hash table of struct type
 * shash_table_t, returns NULL if an error occurs
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(shash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->shead = NULL;


	return (table);
}

/**
 * make_node - function that mallocs and inserts the new node values
 * @key: Const char pointer for unique value to be added
 * @value: Const char pointer for associated value with key to be added
 * Return: shash_node_t pointer address if successful, NULL otherwise
 */

shash_node_t *make_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	return (new);
}

/**
 * assign_head - helper function that updates or assigns a new head node
 * when needed
 * @new: newly created node of type shash_node_t that is to be checked
 * @ht: hash table of type shash_table_t
 * Return: 1 if the head node was updated or created, 0 otherwise
 */

int assign_head(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->shead->sprev = NULL;
		ht->stail = new;
		ht->stail->snext = NULL;
		return (1);
	}

	if (strcmp(new->key, ht->shead->key) < 0)
	{
		temp = ht->shead;
		if (temp->snext == NULL)
			ht->stail = temp;

		new->snext = temp;
		new->sprev = NULL;
		temp->sprev = new;
		ht->shead = new;
		return (1);
	}

	else
		return (0);
}

/**
 * assign - helper function that updates or assigns a new node other than head
 * when needed
 * @new: newly created node of type shash_node_t that is to be checked
 * @ht: hash table of type shash_table_t
 * Return: Void
 */

void assign(shash_node_t *new, shash_table_t *ht)
{
	shash_node_t *temp;
	int status;

	status = assign_head(new, ht);

	if (status == 1)
		return;

	temp = ht->shead->snext;

	while (temp)
	{
		if (strcmp(new->key, temp->key) < 0)
		{
			new->sprev = temp->sprev;
			new->snext = temp;
			temp->sprev->snext = new;
			temp->sprev = new;
			return;
		}

		if (strcmp(new->key, temp->key) > 0 && temp->snext == NULL)
		{
			new->sprev = temp;
			new->snext = temp->snext;
			temp->snext = new;
			ht->stail = new;
			return;
		}
		temp = temp->snext;
	}
}

/**
 * shash_table_set - function that adds an element to the hash table
 * @ht: Double pointer of type shash_table_t for hash table
 * @key: Const char pointer for unique value to be added
 * @value: Const char pointer for associated value with key to be added
 * Return: 1 if success, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *head, *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	new = make_node(key, value);

	if (new == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		assign(new, ht);
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
	assign(new, ht);
	new->next = head;
	ht->array[index] = new;
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: Double pointer of type shash_table_t for hash table
 * @key: Const char pointer for unique value to be searched for
 * Return: The value associated with the element found, NULL if key couldn't be
 * found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
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

/**
 * shash_table_print - function that prints a sorted hash table.
 * @ht: Double pointer of type shash_table_t for hash table
 * Return: Void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	putchar('{');
	temp = ht->shead;
	while (temp)
	{
		if (temp->snext == NULL)
		{
			printf("'%s': ", temp->key);
			printf("'%s'", temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse
 * @ht: Double pointer of type shash_table_t for hash table
 * Return: Void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	putchar('{');
	temp = ht->stail;
	while (temp)
	{
		if (temp->sprev == NULL)
		{
			printf("'%s': ", temp->key);
			printf("'%s'", temp->value);
			break;
		}
		printf("'%s': '%s', ", temp->key, temp->value);
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: Pointer of type shash_table_t for hash table
 * Return: Void
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *temp, *temp2;

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
