#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the value of integer
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int numleft;

	numleft = n % 10;

	if (n < 0)
	{
		numleft = (-1 * numleft);
	}

	_putchar(numleft + '0');
	return (numleft);
}
