#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to the concatenated array or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	len++;
	c = malloc(sizeof(char) * len);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		c[k] = 10;
		k++;
	}
	c[k] = 0;
	return (c);
}
