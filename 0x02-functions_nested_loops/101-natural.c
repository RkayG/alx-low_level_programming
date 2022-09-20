#include <stdio.h>

/**
 * main - computes and prints the multiples of 3 and 5 below 1024, followed
 * by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, num, mul;
	long int result;

	num = 1024;

	for (i = 1; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			mul = i;
			result += mul;
		}
	}
		printf("%ld", result);
		printf("\n");
	return (0);
}
