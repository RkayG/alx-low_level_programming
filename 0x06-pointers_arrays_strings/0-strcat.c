#include "main.h"

/**
 * *_strcat - concantenates two strings
 * @dest: destination of string
 * @src: source of string to append
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
