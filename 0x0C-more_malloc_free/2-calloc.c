#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _memset - set value for memory
 * @p: pointer
 * @a: memory being set
 * @n: int
 * Return: return pointer
 */
char *_memset(char *p, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = a;
	}
	return (p);
}
/**
 * _calloc - function to allocate memory
 * @nmemb: number of allocation
 * @size: size of each space
 * Return: array or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
		if (array == NULL)
		{
			return (NULL);
		}
	array = memset(array, 0, nmemb * size);
		return (array);
}
