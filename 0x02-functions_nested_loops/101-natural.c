#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;

	for (int n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("sum of mult 3 and 5 below 1024 is: %d\n", sum);
	return (0);
}
