#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to be created
 * @text_content: text to write into the file
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
		close(fd);
	}

	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);
	if (wr < 0)
		return (-1);

	close(fd);

	return (1);
}
