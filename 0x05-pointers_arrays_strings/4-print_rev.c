#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints rev
 * @s: string to be printed in rev
 * Return: void value
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
