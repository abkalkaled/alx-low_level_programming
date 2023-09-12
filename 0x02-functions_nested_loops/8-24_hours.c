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

	for (hr = 00; hr <= 23; hr++)
	{
		for (min = 00; min <= 59; min++)
		{
		_putchar(min);
		}
		_putchar(hr);

	}
}
