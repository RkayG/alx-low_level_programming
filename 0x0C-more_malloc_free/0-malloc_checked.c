#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);/*process termination with status 98*/
	return (ptr);
}
