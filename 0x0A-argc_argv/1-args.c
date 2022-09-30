#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of command line arguments starting with 0
 * @argc: argument count
 * @argv: command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
