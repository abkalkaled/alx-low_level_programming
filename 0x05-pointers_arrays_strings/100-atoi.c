#include "main.h"
/**
 * _atoi - starts to convert string
 * @s: the string
 * Return: returns outcome
 */
int _atoi(char *s)
{
	short boolean;
	int i, sign, rslt;
	
	i = sign = rslt = boolean = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			rslt *= 10;
			rslt -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	rslt *= sign;
	return (rslt);
}
