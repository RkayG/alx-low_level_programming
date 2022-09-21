#include "main.h"

/**
 * *_strncat - concantenates two strings
 * @dest: destination of string
 * @src: source of string to append
 * @n: value of integer
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
