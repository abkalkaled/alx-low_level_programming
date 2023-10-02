#include "main.h"
/**
 * _strncpy - func that copies string
 * @dest: pointer to destination string
 * @src: pointer to source string@n: num of bytes to be used
 * @n: num of bCount
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bCount;

	for (bCount = 0; bCount < n && src[bCount] != '\0'; bCount++)
		dest[bCount] = src[bCount];
	for (; bCount < n; bCount++)
		dest[bCount] = '\0';
	return (dest);
}
