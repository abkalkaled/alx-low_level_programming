#include <stdio.h>
/**
 * main - start point
 *
 * Return: ends with (0)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
