#include <stdio.h>
#include <stdlib.h>
/**
 *main - start point
 *@argc: argument count
 *@argv: argument vector
 *Return: 0;
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int i, j, mul;

		if (argc == 2)
		{
			mul = i * j;
			printf("%d\n", mul);
		}
		else 
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
