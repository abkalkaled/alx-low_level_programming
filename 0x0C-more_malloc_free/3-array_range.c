#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of int
 * @min: minimum value of int
 * @max: max value of int
 * Return: p or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int n = 0, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(n * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
		n = min + 1;
	return (p);
}
