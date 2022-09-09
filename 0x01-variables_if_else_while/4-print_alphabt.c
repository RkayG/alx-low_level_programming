#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets except q and e
 *
 * Return: zero (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	putchar('\n');
	return (0);
}
