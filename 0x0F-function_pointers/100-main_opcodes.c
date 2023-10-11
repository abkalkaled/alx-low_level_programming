#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int a, x;
	int (*ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = &main;
	for (x = 0; x < a; x++)
		printf("%.2x ", *((unsigned char *)(ptr + x)));
	printf("\n");
	return (0);
}
