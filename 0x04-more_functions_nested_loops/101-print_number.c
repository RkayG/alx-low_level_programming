#include "main.h"

/**
 * print_number - print integers with onlymy _puchar unction
 * @n: value of integer
 * Return: null
 */
void print_number(int n)
{
	/**
	 * if number is less than 0 put '-' and change
	 * number to positive
	 */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* remove last digit and recur */
	if (n / 10)
	{
		print_number(n / 10);
	}
	/* print the last digit */
	_putchar(n % 10 + '0');

}
