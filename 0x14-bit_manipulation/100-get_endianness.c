#include "main.h"
/**
 * get_endianness - returns the value of a bit at a given index
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *p = (unsigned char *)&num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
