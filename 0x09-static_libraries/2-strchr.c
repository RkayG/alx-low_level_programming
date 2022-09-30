#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 *
 * Return: pointer to first occurence of char in string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
