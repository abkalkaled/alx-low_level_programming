#include "main.h"
/**
* _strpbrk - loaction fo first occurence starts
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
