#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - funxtion to add
 * @argc: argument count in int
 * @argv: argument vector in str
 * Return 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;
	
	if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		for(j = 0; arg[i] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
