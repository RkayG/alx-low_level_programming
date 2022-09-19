#include "main.h"

/**
 * print_rev - prints a string followed by a new line to stdout
 *
 * @s: character pointer variable
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* iterate to find length of string and point to last char */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string reversed */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
