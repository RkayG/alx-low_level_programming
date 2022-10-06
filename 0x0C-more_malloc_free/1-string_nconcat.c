#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to copy from second string
 * Return: pointer to joined strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *joinstr;
	int len1 = 0, len2 = 0, i = 0, j = 0, k = 0;
	int nb = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nb < 0)
		return (NULL);

	while (s1[i] != '\0')
		len1++, i++;
	while (s2[j] != '\0')
		len2++, j++;
	len2++;

	if (nb >= len2)
		nb = len2;

	joinstr = malloc(sizeof(char) * (len1 + len2));

	if (joinstr == NULL)
		return (NULL);

	i = 0, j = 0, k = 0;

	while (s1[i] != '\0')
	{
		joinstr[k] = s1[i];
		i++, k++;
	}
	while (j < nb)
	{
		joinstr[k] = s2[j];
		j++, k++;
	}
	joinstr[k] = '\0';

	return (joinstr);
}
