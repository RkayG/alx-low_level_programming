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

	char *str;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = (va_arg(ap, char *));

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}