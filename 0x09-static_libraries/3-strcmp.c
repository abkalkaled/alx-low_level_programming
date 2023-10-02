#include "main.h"
/**
 * _strcmp - Comparing two strings starts here
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: 0 when strings equal
 */
int _strcmp(char *s1, char *s2)
{
	int counter, comp;

		counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	comp = s1[counter] - s2[counter];
	return (comp);
}
