#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int limit;
	unsigned long fib1 = 0, fib2 = 0, sum;
	unsigned long fib_x1. fib_x2, fib_y1, fib_y2;
	unsigned long h1, h2;

	for (limit = 0; limit < 92; limit++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib_x1 = fib1 / 10000000000;
	fib_x2 = fib2 / 10000000000;
	fib_y1 = fib1 % 10000000000;
	fib_y2 = fib2 % 10000000000;
	for (limit = 93; limit < 99; limit++)
	{
		h1 = fib_x1 + fib_y1;
		h2 = fib_x2 + fib_y2;
		if (fib_x2 + fib_y2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("lu%lu", h1, h2);
		if (limit !=98)
			printf(", ");
		fib_x1 = fib_y1;
		fib_x2 = fib_y2;
		fib_y1 = h1;
		fib_y2 = h2;
	}
	printf("\n");
	return (0);
}
