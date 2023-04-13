#include <stdio.h>

/**
 * linear_search - searchs for a value in array with Linear Search Algorithm
 * @array: array to be searches
 * @size: size of array
 * @value: value to be searched for
 *
 * Return: -1 if val is not presentor array is empty, otherwise 1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
