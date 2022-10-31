#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file to be read from
 * @letters: number of bytes to read and print
 * Return: number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, num_bytes;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	if (rd < 0)
		return (0);

	buff[letters] = '\0';

	num_bytes = write(1, buff, rd);
	if (num_bytes < 0)
		return (0);

	close(fd);
	free(buff);

	return (num_bytes);
}
