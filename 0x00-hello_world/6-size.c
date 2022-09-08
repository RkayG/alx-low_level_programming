#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of an int: %lu bytes\n," (unsigned long)sizeof(a));
	printf("Size of an char: %lu bytes\n," (unsigned long)sizeof(b));
	printf("Size of an long int: %lu bytes\n," (unsigned long)sizeof(c));
	printf("Size of an long long int: %lu bytes\n," (unsigned long)sizeof(d));
	printf("Size of an float: %lu bytes\n," (unsigned long)sizeof(d));
	return (0);
}

