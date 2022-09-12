#include <stdio.h>
#include <ctype.h>

/**
 * main - prints double digit numbers with comma and space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <=9; c++)
			{

			if (b > a && c > b)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');

			if (a == 7 && b == 8 && c == 9)
				continue;
			{
				putchar(',');
				putchar(' ');
			}

			}

			}

		}

	}
	putchar('\n');
	return (0);
}
