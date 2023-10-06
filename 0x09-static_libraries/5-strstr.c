#include "main.h"
/**
* _strstr - function to locate and return pointer to first occurence of substring
* @haystack: string to search
* @needle: target substring in search
* Return: haystack pointer or NULL
*/

char *_strstr(char *haystack,char *needle)
{
	int a = 0, b, x;

	if (needle[0] == '\0')
		return (haystack);
	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			x = a, b = 0;
			while (needle[b] != '\0')
			{
				if (haystack[x] == needle[b])
					x++, b++;
				else
					break;
				}
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
		a++;
	}
	return (NULL);
}
