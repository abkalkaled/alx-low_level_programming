#include <stdio.h>
#include <stdlib.h>
/**
 *main - start point
 *@argc: argument count
 *@argv: argument vector
 *Return: 0;
 */
int main(int argc, char *argv[])
{
	int i = argc - 1, j = i - 1, mul;

		if (i == 2)
		{
			mul = atoi(argv[i]) * atoi(argv[j]);
			printf("%d\n", mul);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
