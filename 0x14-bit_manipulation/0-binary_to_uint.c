#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - fucntion that converts binary to unsigned int
 * @b: binary string
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL || *b == '\0')
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '\0')
		{
			num = (num << 1) + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (num);
}
