#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file to be created
 * @text_content: text to write into the file
 * Return: 1 on success; -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		return (-1);
		close(fd);
	}

	while (text_content[i])
		i++;

	write(fd, text_content, i);

	close(fd);

	return (1);
}
