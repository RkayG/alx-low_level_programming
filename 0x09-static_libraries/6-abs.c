#include <unistd.h>
#include "main.h"

/**
 * _abs - computes the absolute value of a number
 *
 * @a: the value of integer
 *
 * Return: Always 0
 */

int _abs(int a)
{
	if (a > 0)
	{
		a = a * 1;
		return (a);
	}
	else if (a < 0)
	{
		a = (-1) * a;
		return (a);
	}

	return (0);
}
