#include <stdio.h>
#include "main.h"

/**
 * main - calls my print_alphabet function to print alphabets in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int r;

	r = _isalpha('P');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
