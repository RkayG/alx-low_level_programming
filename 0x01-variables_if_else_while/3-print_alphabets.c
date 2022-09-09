#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabet in lower case       *
 * Return: Always 0 (success)
 */
int main(void)
{
        char a = 'A';

        while (a <= 'Z')
	{
                putchar(tolower(a));
		putchar(toupper(a));
		a++;
        }
        putchar('\n');
        return (0);
}
