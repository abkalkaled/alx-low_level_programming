#include "main.h"
/**
 * get_bit - function to get bit
 * @index: bit index
 * @n: number to get
 * Return: index value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long) * 8)
		return (-1);
	if ((n & mask) != 0)
		return (1);
	return (0);
}
