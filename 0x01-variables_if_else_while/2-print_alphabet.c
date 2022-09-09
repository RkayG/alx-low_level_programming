#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;

	a = 'A';

	while (a <= 'Z')
	{
		a = tolower(a);
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
