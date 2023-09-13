#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float t_sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			t_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%1f\n", sum);
	return (0);
}
