#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int z = 4000000;

	unsigned long long fib1 = 1, fib2 = 2, sum = 0;

	while (fib2 <= z)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		unsigned long long fib_n = fib1 + fib2;

		fib1 = fib2;
		fib2 = fib_n;
	}
	printf("%llu\n", sum);
	return (0);
}
