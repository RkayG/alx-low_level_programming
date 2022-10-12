#include <unistd.h>

/**
 * _putchar - prints to standard output
 * @c: charcter to print
 * Return: 1 on success. Otherwise -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1);
}
