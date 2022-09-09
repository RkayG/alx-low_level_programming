#include <stdio.h>
#include <ctype.h>

/**
 * main - prints single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		if (a != 10 && a < 10)
		{
			putchar((a) + '0');
		}
	putchar('\n');
	return (0);
}
