#include <stdio.h>
/**
 * main - entry point of code
 *
 * Return: gives a value of 0
 */
int main(void)
{
	char n = 97; /*97 is 'a' in ASCII*/

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

