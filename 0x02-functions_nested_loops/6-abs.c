#include "main.h"
/**
 * _abs - entry point
 * @n: representing the integer
 * Return: abs or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (0);
}
