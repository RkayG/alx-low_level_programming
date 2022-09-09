#include <stdio.h>
#include <time.h>
/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("Number is positive\n");
	else
		if (n == 0)
			printf("Number is zero\n");
		else
			printf("Number is negative\n");
}

