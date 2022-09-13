#include "main.h"

/**
 * print_alphabet_x10 - function prints all alphabets,
 * in lowercase, to stdout ten times
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
	char alpha;
	int again;

	for (again = 0; again < 10; again++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}
