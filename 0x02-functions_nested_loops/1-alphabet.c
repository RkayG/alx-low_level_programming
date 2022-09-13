#include "main.h"

/**
 * print_alphabet - function prints all alphabets, in lowercase, to stdout
 *
 * Return: null
 */
void print_alphabet(void)
{
	char alpha = 'a';

	do {
		_putchar(alpha);
		alpha++;

	} while (alpha <= 'z');

	_putchar('\n');

}
