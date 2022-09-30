#include <stdio.h>

/**
 * main - prints the program's name (its own name)
 * @argc: argument count
 * @argv: command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
