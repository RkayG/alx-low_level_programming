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

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b > a)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');

			if (a == 8 && b == 9)
				continue;
			{
				putchar(',');
				putchar(' ');
			}

			}

		}

	}
	putchar('\n');
	return (0);
}
