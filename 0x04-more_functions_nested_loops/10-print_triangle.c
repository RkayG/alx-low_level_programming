#include "main.h"

/**
 * print_triangle - draws a triangle in the terminal
 *
 * @size: value of integer
 *
 * Return: null
 */
void print_triangle(int size)
{
	int height, width, draw;

	if (size <= 0)
	{
		_putchar('\n');
	}
		for (height = 1; height <= size; height++)
		{

			for (width = 1; width <= (size - height); width++)
			{
				_putchar(' ');
			}
			for (draw = 1; draw <= height; draw++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
