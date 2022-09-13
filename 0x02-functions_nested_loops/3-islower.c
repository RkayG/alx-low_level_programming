#include <unistd.h>

/**
 * _islower - checks for lower case characters
 *
 * @c: the character to check for
 *
 * Return: on success 1
 * On failure - 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

	return (1);

	else
		return (0);

}

