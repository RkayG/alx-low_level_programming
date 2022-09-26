#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (len);
			}
		}
	}
	return (len);
}
