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

	while (a <= 97 && b <= 65)
	{
		putchar(a);
		putchar(b);
		a++;
		b++;
	}
	putchar('\n');
	return (0);
}
