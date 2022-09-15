#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
 *
 * @n: value of integer
 *
 * Return: null
 */
void print_diagonal(int n)
{
	int lines, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			for (space = 1; space < lines; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
