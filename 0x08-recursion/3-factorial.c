#include "main.h"
/**
 * factorial - finds factorial of n 
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else (n == 0)
		return (1);
			return (n * factorial(n - 1));
}
