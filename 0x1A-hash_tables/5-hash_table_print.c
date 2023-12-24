#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_value = 1;

	if (ht ==NULL)
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
