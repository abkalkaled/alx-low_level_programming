#include "main.h"
/**
 * clear_bit - function that sets bit to 0
 * @index: index starting from 0
 * @n: bit to set to
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long) * 8)
		return (-1);
	*n &= mask;
	return (1);
}

