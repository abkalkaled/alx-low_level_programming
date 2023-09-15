#include <stdio.h>
#include <math.h>
/**
 * main - prints largest prime factor
 *
 * Return: Alwyas 0
 */
int main(void)
{
	long x, max;
	long num = 612852475143;
	double sq = sqrt(num);

	for (x = 1; x <= sq; x++)
	{
		if (num % x == 0)
		{
			max = num / x;
		}
	}
	printf("%ld", max);
	return (0);
}
