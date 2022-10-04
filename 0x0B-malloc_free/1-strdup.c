#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of string str
 * @str: string
 * Return: pointer on success, or NULL if str = NULL && if insufficient memory
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		len++;
		i++;
	}
	len++; /* add null terminator to len */

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(newstr + i) = *(str + i);
		i++;
	}
	return (newstr);

}
