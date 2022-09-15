#include "main.h"

/**
 * print_square - prints a square in the terminal
 *
 * @size: value of integer
 *
 * Return: null
 */
void print_square(int size)
{
	int times, row;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{

			for (times = 1; times <= size; times++)
			{
				_putchar('#');

			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
