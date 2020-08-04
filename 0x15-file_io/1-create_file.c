#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (0);
	if (text_content == NULL)
		write(fd, text_content, 0);
	else
		return (-1);
	close(fd);
	return (1);
}