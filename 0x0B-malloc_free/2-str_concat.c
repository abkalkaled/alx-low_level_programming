#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two stngs
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string or NULL if the process fails
 */
char *str_concat(char *s1, char *s2)
{
	int i_s1, i_s2, len1, len2;
	char *c;

	if (s1 == 0)
	{
		s1 = "";
	}
	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (len2 = 0; s2[len2] != 0; len2++)
	{
	}
	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == 0)
	{
		return (0);
	}
	for (i_s1 = 0; i_s1 < len1; i_s1++)
	{
		c[i_s1] = s1[i_s1];
	}
	for (i_s2 = 0; i_s2 < len2; i_s1++, i_s2++)
	{
		c[i_s1] = s2[i_s2];
	}
	c[i_s1] = 0;
	return (c);
}
