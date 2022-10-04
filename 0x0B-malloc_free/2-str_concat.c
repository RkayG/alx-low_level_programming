#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, return NULL if string's empty
 */
char *str_concat(char *s1, char *s2)
{
	char *joinstr;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /* add null terminator */

	joinstr = malloc(sizeof(char) * (len1 + len2));

	if (joinstr == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(joinstr + i) = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		*(joinstr + i) = *(s2 + j);
		i++, j++;
	}
	return (joinstr);
}
