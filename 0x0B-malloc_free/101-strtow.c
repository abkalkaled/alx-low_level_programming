#include "main.h"
#include <stdlib.h>
/**
 *strtow - char
 *@str: pointer to string
 *Return: char
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0;
	int len = 0, count = 0;
	char **f, *col;
	f = malloc(sizeof(char *) * count);
	if (!f)
	{
		return (NULL);
	}
	i = 0;
	while (*str)
	{
		while (*str == ' ' && *str)
		{
			str++;
		}
		len = 0;
		while (*(str + len) != ' ' && *(str + len))
		{
			len += 1;
		}
		len += 1;
		col = malloc(sizeof(char) * len);
		if (!col)
		{
			for (k = j - 1; k >= 0; k--)
			{
				free(f[k]);
			}
			free(f);
			return (NULL);
		}
		for (k = 0; k < (len - 1);  k++)
		{
			*(col + k) = *(str++);
		}
		*(col + k) = '\0';
		*(f + j) = col;
		if (j < (count - 1))
		{
			j++;
		}
	}
	*(f + j) = NULL;
	return (f);
}
