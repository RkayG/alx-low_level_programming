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
	void *arr;
	/* unsigned int i; */

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);
	/*for (i = 0; i < nmemb * size; i++)
		*((char *)arr + i) = 0;*/

	return (arr);
}
