#include "hash_tables.h"

/**
 * key_index - Get the index of a key in a hash table.
 * @key: Key for which the index is calculated.
 * @size: Size of the array of the hash table.
 * Return: Index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	unsigned long int index = hash_value % size;

	return (index);
}

