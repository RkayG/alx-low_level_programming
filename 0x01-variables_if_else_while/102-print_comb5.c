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

	for (a = 0; a < 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			if (b > a)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((a / 10) + '0');
				putchar((b % 10) + '0');

			if (a == 98 && b == 99)
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
