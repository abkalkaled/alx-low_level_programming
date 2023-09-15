#include "main.h"
/**
 * print_line - starts to print line
 * @n: number of times to print _
 * Return: always 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (n = 2; n <= 10; n++)
	{
		_putchar(95);
	}
		_putchar('\n');
	}
}
