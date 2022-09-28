#include "main.h"

/**
 * find_root - find the square root of n
 * @n: value of n
 * @root: yo find root
 * Return: natural square root, -1 if unnatural
 */
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_root(n, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value of integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
