#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	return (write(1, "98 is positive\n", 14));
}
