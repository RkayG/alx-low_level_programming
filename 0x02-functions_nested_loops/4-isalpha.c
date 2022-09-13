#include <unistd.h>

/**
 * _isalpha - checks for upper case characters
 *
 * @c: the character to check for
 *
 * Return: on success 1
 * On failure - 0
 */
int _isalpha(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		
		return (1);
	}

	else
	{
		return (0);
	}
	return (0);
}

