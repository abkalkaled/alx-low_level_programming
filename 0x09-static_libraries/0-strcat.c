#include "main.h"
/**
*_strcat - strats to concatenates two strings.
*@dest: pointer to dest string.
*@src: pointer to source string.
*Return: destination string ponter.
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
