#include "main.h"
/**
 * swap_int - swaps value of integer
 * @a: intger 1
 * @b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
