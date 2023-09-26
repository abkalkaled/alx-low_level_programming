#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diagSum1 = 0;
	int diagSum2 = 0;
	int row, iterate;

	for (row = 0; row < size; row++)
	{
		iterate = (row * size) + row;
		diagSum1 += a[iterate];
	}

	for (row = 1; row <= size; row++)
	{
		iterate = (row * size) - row;
		diagSum2 += a[iterate];
	}
	printf("%d, %d\n", diagSum1, diagSum2);
}
