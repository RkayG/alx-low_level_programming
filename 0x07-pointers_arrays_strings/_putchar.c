#include <unistd.h>

/**
 * _putchar - prints c to the standard output
 *
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned , and errnois set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
