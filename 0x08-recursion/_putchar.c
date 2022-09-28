#include "unistd.h"

/**
 * _putchar - prints a characyer to stdout
 * @c: character to print
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
