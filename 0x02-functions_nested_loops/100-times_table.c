#include "main.h"

/**
 * print_times_table -  a function that prints the n times table,
 * starting with 0
 *
 * @n: value of integer
 *
 * row = row, col = column, num = digits of current result
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, num;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				num = (row * col);
				if (col == 0)
					continue;
				{	
					_putchar(',');
					_putchar(' ');
				}

					if (num <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + num);
					}
					else if (num > 9 && num < 100)
					{

						_putchar(' ');
						_putchar('0' + (num / 10));
						_putchar('0' + (num % 10));
					}
					else if (num >= 100)
					{
						_putchar('0' + (num / 100));
						_putchar('0' + (num / 10) % 10);
						_putchar('0' + (num % 10));
					}
			}
			_putchar('\n');
		}
	}
}
