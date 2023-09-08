#include <stdio.h>
/**
 * main -entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	/*48 is 0 in ASCII*/
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
