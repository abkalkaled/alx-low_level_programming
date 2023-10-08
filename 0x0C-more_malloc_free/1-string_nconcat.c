#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of chars of s2
 * Return: pointer p or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	if (s1 == 0)
		s1 = "";
	for (len1 = 0; s1[len1] != 0; len1++)
	{
	}
	if (s2 == 0)
		s2 = "";
	for (len2 = 0; s2[len2] != 0; len2++)
	{
	}
	if (n >= len2)
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == 0)
		return (0);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; j < len2; i++, j++)
			p[i] = s2[j];
	}
	else
	{
		for (j = 0; j < n; i++, j++)
			p[i] = s2[j];
	}
	p[i] = 0;
	return (p);
}
