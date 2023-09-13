#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;
	long i = 1, j = 2;

	while (n < 50)
	{
		if (n == 0)
			printf("%ld", i);
		else if (n == 1)
			printf(", % ld", j);
		else
		{
			j += i;
			i = j - i;
			printf(", % ld", j);
		}
		++n;
	}
	printf("\n");
	return (0);

}
