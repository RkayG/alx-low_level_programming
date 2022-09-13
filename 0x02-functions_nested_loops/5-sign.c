#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to check for
 *
 * Return: on success 1 and '+' if number is positive;
 * 0 and prints '0' if zero; -1 and prints '-' if negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
