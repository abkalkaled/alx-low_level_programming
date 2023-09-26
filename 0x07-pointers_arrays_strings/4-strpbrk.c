#include "main.h"
#define NULL 0
/**
* _strpbrk - loaction fo first occurence starts
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return (NULL);
}
