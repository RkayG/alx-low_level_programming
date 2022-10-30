#include "main.h"

/**
 * get_endianess - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

	if (*(char *)&x == 1)
		return (1);
	else
		return (0);
}
