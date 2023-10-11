#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - retruns index pffirst element
 *@array: array
 *@size: the size of the array
 *@cmp: pointer to the function
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != 0 && cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		if (cmp(array[i]) == 0)
			return (-1);
	}
	else
		return (-1);
	return (i);
}
