#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of nums
 * @a: array of nums
 * @n: size
 */
void print_diagsums(int *a, int n)
{
	int diag_sum_1 = 0;
	int diag_sum_2 = 0;
	int row, i;

	for (row = 0; row < n; row++)
	{
		i = (row * n) + row;
		diag_sum_1 += a[i];
	}

	for (row = 1; row <= n; row++)
	{
		i = (row * n) - row;
		diag_sum_2 += a[i];
	}
	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
