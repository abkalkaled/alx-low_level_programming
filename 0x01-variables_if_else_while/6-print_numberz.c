#include <stdio.h>
/**
 * main - start of program
 *
 * Return: 0 at the end
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 9;)
	{
		putchar(x + 48);
		x++;
	}
	putchar('\n');
	return (0);
}
