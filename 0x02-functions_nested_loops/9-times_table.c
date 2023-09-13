#include "main.h"
/**
 * times_table - entry point for table 9
 *
 * Return: void value
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(e);
				_putchar(d);
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c);
			}
		}
		_putchar('\n');
	}
}
