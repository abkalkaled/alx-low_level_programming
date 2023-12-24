#include "hash_tables.h"
/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}

/**
 * shash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int shash_djb2(const unsigned char *str)
{
	unsigned long int shash = 5381;
	int d;

	while ((d = *str++))
	{
		shash = ((shash << 5) + shash) + d;
	}
	return (shash);
}

/**
 * key_index - Get the index of a key in a shash table.
 * @key: Key for which the index is calculated.
 * @size: Size of the array of the hash table.
 * Return: Index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int shash_value = shash_djb2(key);

	unsigned long int index = shash_value % size;

	return (index);
}

/**
 * shash_table_set - Adds an element to the shash table.
 * @ht: The shash table to add or update the key/value.
 * @key: The key. Must not be an empty string.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
		current->value = strdup(value);
		if (current->value == NULL)
			return (0);
		return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The shash table to look into.
 * @key: The key to search for.
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

			current = ht->array[index];
			while (current != NULL)
			{
			if (strcmp(current->key, key) == 0)
			return (current->value);
			current = current->next;
			}
			return (NULL);
}

/**
 * shash_table_print - Prints a shash table.
 * @ht: The hash table to print.
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current;
	int first_value = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_value)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_value = 0;
			current = current->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a shash table.
 * @ht: The shash table to delete.
 * Return: Void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
