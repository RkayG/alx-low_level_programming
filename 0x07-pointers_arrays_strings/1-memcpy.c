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
	unsigned short i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] += src[j];
		}
	}
	return (dest);
}
