#include "main.h"
/**
 * leet - encodes string
 * @p: string pointer
 * Return: pointer to p
 */
char *leet(char *p)
{
	int sCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNumbers[] = "4433007711";

	sCount = 0;
	while (p[sCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == p[sCount])
			{
				p[sCount] = leetNumbers[leetCount];
			}
			leetCount++;
	}
		sCount++;
	}
	return (p);
}
