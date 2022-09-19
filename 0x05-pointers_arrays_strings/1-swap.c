#include "main.h"

/**
 * swap_int(int *a, int *b) - swapsthr values of two integers
 *
 * @a - first pointer variable
 * @b - secomd pointer variable
 */
void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
