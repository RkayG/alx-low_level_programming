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
	b = tolower(a);

	while (a <= 'Z')
	{
		putchar(b);
		putchar('\n');
		b++;
	}
	return (0);
}
