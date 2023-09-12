#include "main.h"
/**
 * print_last_digit - process entry point
 * @n: number to be printed
 * Return: returns the valued of lastD
 */
int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	if (lastD < 0)
	{
		lastD = (lastD * -1);
	}
	_putchar(lastD + '0');
	return (lastD);
}
