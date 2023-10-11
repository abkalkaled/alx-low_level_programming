#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - funtion that executes
 * @array: the array
 * @size: size of array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
