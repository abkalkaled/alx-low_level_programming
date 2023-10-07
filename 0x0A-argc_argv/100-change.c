#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print coin for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a = 0, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	for (; cent > 0; a++)
	{
		if (cent - 25 >= 0)
		{
			cent = cent - 25;
		}
		else if (cent - 10 >= 0)
		{
			cent = cent - 10;
		}
		else if (cent - 5 >= 0)
		{
			cent = cent - 5;
		}
		else if (cent - 2 >= 0)
		{
			cent = cent - 2;
		}
		else if (cent - 1 == 0)
		{
			cent = cent - 1;
		}
	}
	printf("%d\n", a);
	return (0);
}
