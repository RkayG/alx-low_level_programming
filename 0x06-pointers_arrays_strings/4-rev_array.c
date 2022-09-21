#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	i = 0; /* i = beginning of array */
	j = n - 1; /* j = end of array. Omit terminator '\0' */
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++, j--;
	}
}
