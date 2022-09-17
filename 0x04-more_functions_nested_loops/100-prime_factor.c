#include <stdio.h>

/**
 * main - prints the largest prime factor of a given num
 *
 * Return: Always 0
 */
int main(void)
{
	int factor;
	long int num;

	factor = 2;
	num = 612852475143;

	while (factor < num)
	{
		if (num % factor == 0)
		{
			num = num / factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", num);
	return (0);

}
