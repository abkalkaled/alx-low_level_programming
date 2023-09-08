#include <stdio.h>
/**
 * main - entry point
 *
 * Return: gives a value of 0 to stop
 */
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (b <= 96)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
