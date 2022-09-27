#include <stdio.h>

/**
 * main - prints the first fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 *
 * Retun: 0
 */
int main(void)
{
	int counter;
	int countto = 50;
	long int x = 1;
	long int y = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li, %li ", x, y);
		x += y;
		y += x;
	}
	if ((countto % 2) == 1)
	{
		printf("%li", x);
	}
	printf("\n");
	return (0);
}
