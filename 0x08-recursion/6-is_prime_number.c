#include "main.h"
/**
 * is_prime_number - function to return prime number
 * @is_prime
 * @n: prime number
 * @div: the divisor
 * Return: 0 or 1
 */
int is_prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (n == div)
		return (1);
	return (is_prime(n, div + 1));
}
int is_prime_number(int n)
{
	int div = 5;

	if (n % 2 == 0 || n < 0)
		return (0);
	else if (n == 2)
		return (1);
	return (is_prime(n, div));
}
