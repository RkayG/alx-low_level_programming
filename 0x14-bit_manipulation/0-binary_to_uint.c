#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if there is one or
 * more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, val = 0;

	if (b == NULL)
		exit(98);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
		}
		else
		{
			return (0);
			b = NULL;
		}
	}

	return (val);
}
