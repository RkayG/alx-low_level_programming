#include "main.h"

/**
 * _prime_number - find prime number
 * @n: value of integer
 * @fact: factor of n
 * Return: 1 if prime num, otherwise 0
 */
int _prime_number(int n, int fact)
{
	if (n == fact)
		return (1);
	if (n % fact == 0)
		return (0);
	return (_prime_number(n, fact + 1));
}


/**
 * is_prime_number - checks if input integer is a prime number
 * @n: value of integer
 * Return: 1 if integer, otherwise return 0
 */
int is_prime_number(int n)
{
	int fact = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_prime_number(n, fact));
}
