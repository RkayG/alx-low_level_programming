#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lower case       *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	return (0);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
