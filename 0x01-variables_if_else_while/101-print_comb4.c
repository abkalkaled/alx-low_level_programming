#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0 value
 */
int main(void)
{
	int unit = 0;
	int tens = 0;
	int hund = 0;

	for (unit = 0; unit <= 8; unit++)
	{
		for (tens = unit + 1; tens <= 9; tens++)
		{
			for (hund = tens + 1; hund <= 10; hund++)
			{
			putchar((unit % 10) + '0');
			putchar((tens % 10) + '0');
			putchar((hund % 10) + '0');
			if (unit == 7 && tens == 8 && hund == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
