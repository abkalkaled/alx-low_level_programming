#include "main.h"
/**
 *_strncat - function that concatenates two strings.
 *@dest: pointer to destination string.
 *@src: pointer to source
 *@n: number of bytes to concatenate
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, a;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, len++)
	{
		dest[len] = src[a];
	}
	dest[len] = '\0';
	return (dest);
}
