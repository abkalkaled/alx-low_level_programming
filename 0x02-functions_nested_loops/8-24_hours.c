#include "main.h"
/**
 * jack_bauer - 24 hours start here ;)
 *
 * Return: a void value is returned
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
		_putchar('0' + (hr / 10)); /*prints the tens for hour*/
		_putchar('0' + (hr % 10)); /*unitss for hours*/
		_putchar(':');
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
		_putchar('\n');
		}
	}
}
