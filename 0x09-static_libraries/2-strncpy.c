#include "main.h"

/**
 * _strncpy - copies a stting
 *
 * @dest: destination of string
 * @src: string to copy
 * @n: value of integer
 *
 * Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
