#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: value if integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		n = n;
	}

	/* remove last digit and recur */
	if (n / 10)
	{
		print_number(n / 10);
	}

	/* print last digit */
	_putchar(n % 10 + '0');
}
