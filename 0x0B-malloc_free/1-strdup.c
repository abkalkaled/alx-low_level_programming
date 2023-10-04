#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup -  returns a pointer to new malloc
 *@str: the string to be copied
 * Return: a pointer to the array or NULL if the process fails
 */
char *_strdup(char *str)
{
	int i, len;
	char *b;

	if (str == 0)
	{
		return (0);
	}
	for (len = 0; str[len] != 0; len++)
	{
	}
	len++;
	b = malloc(sizeof(char) * len);
	if (b == 0)
	{
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		b[i] = str[i];
	}
	return (b);
}
