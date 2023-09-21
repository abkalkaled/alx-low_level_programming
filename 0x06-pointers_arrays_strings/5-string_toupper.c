#include "main.h"
/**
 * string_toupper - chnages lowercase strings to uppercase
 * @p: string pointer
 * Return: returns p
 */
char *string_toupper(char *p)
{
	int len;

	len = 0;
	while (p[len] != '\0')
	{
		if (p[len] >= 97 && p[len] <= 122)
		{
			p[len] = p[len] - 32;
		}
		len++;
	}
	return (p);
}
