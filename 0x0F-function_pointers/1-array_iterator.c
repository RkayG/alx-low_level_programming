#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array.
 * @array: array of integers
 * @size: size of array
 * @action: call-back function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;

	if (action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
