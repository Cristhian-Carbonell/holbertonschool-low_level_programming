#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2], 1024);
	return (0);
}
/**
 * cp_file - function copies the content
 * @file1: is the name of the file
 * @file2: file of copy
 * @bytes: numbers bytes
 */
void cp_file(char *file1, char *file2, size_t bytes)
{
	int fd1, fd2, count;
	char buf[1024];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
		printf_error_read(file1);
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		printf_error_write(file2);
	count = read(fd1, buf, bytes);
	while (count > 0)
	{
		if (write(fd2, buf, count) < 0)
			printf_error_write(file2);
		count = read(fd1, buf, bytes);
	}
	if (count == -1)
		printf_error_read(file1);
	if (close(fd1) == -1)
		printf_error_close(fd1);
	if (close(fd2) == -1)
		printf_error_close(fd2);
}

/**
 * printf_error_read - function that prints error
 * @filename: arguments
 */
void printf_error_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * printf_error_write - function that prints error
 * @filename: arguments
 */
void printf_error_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * printf_error_close - function that prints error
 * @filename: arguments
 */
void printf_error_close(int filename)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filename);
	exit(100);
}
