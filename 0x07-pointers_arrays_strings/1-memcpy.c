#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: where to copy fron
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	return (dest);
}
