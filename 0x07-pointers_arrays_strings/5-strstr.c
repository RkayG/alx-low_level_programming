#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of located substring
 * or NULL, if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
