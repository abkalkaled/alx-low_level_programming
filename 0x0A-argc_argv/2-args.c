#include <stdio.h>
#include <stdlib.h>
/**
 * main - start point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc;  i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
