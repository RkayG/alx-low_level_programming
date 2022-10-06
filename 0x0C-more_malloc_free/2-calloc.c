#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of memory
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (arr != NULL)
		memset(arr, 0, nmemb * size);
	else
		return (NULL);

	return (arr);
}
