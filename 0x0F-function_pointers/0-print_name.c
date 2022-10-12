#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: call_back function
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
}
