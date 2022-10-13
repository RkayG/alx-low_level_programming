#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints numbers followed by a new line
 * @separator: string conataining comma and space
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		printf("nil");

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));

		if (i == (n - 1))
			continue;
		printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
