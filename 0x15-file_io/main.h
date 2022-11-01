#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* write, read, close */
#include <stdio.h>
#include <sys/types.h> /* open, creat */
#include <sys/stat.h> /* open, creat */
#include <fcntl.h> /* open, creat */
#include <stdlib.h> /* malloc */
#include <string.h> /* strlen */

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
