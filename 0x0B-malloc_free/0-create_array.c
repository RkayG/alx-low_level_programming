#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: size of array
 * @c: char to initialize with
 * Return: NULL if size is 0; pointer to array if not 0 or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(arr) * size);

	if (arr == NULL)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';
	return (arr);
}

