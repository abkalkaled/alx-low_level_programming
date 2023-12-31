#include "main.h"
/**
 * is_prime_number - function to return prime number
 * @is_prime - function to return div
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
	return (is_prime(n + 1, div));
}
int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 0)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, div));
}
