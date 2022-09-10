#include <stdio.h>

/**
 * main - print hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char hex;

	for (a = 0; a < 10; a++)
		putchar((a) + '0');

	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
