#include "main.h"
/**
 * set_bit - function to set bit
 * @index: index starting from 0 to n
 * @n: the bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long) * 8)
		return (-1);
	*n |= mask;
	return (1);
}

