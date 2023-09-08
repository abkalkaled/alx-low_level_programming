#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int unit = 0;
	int tens = 0;

	for (unit = 0; unit <= 9; unit++)
	{
		for (tens = unit + 1; tens <= 9; tens++)
	{
		putchar((unit % 10) + '0');
		putchar((tens % 10) + '0');
		if (unit == 8 && tens == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
