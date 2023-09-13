#include "main.h"
/**
 * times_table - entry point for table 9
 *
 * Return: void value
 */
void times_table(void)
{
	int a, b;
	int c = a * b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			_putchar(44);
			_putchar(32);
			_putchar('c');
		}
		_putchar('\n');
	}
}
