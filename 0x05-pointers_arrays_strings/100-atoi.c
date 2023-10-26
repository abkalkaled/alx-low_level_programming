#include "main.h"
/**
 * _atoi - starts to convert string
 * @s: the string
 * Return: returns outcome
 */
int _atoi(char *s)
{
	int sign = 1;
	int rslt = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			rslt = rslt * 10 + (s[i] - '0');
		}
		else if (rslt > 0)
			break;
		i++;
	}

	return (rslt * sign);
}
