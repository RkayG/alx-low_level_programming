#include <stdio.h>
#include <ctype.h>

/**
 * main - prints double digit numbers with comma and space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b)
				continue;
		{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		putchar(',');
		putchar(' ');
		}

		}

	}
	putchar('\n');
	return (0);
}
