#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers  followed
 * by a new line
 *
 * @a: value of first integer
 * @n: value of second of integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == (n - 1))
			continue;
		{
			printf(", ");
		}
	}
	printf("\n");
}
