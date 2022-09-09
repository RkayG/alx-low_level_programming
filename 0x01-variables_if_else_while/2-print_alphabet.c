#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a, b;

	a = 'A';

	while (a <= 'Z')
	{
		a = tolower(a);
		putchar(a);
		putchar('\n');
		b++;
	}
	return (0);
}
