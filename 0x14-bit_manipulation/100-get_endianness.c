#include "main.h"
/**
 * get_enidanness - returns the value of a bit at a given index
 * @num: number to get the bit from
 * @p: the index, starting from 0 of the bit desired
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *p = (unsigned char*)&num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
