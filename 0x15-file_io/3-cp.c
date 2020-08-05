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
		dprintf(2, "Usage: cp file_from file_to\n");
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
 *
 * Return: 1
 */
void cp_file(char *file1, char *file2, size_t bytes)
{
	int fd1, fd2, count;
	char buf[1024];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	count = read(fd1, buf, bytes);
	while (count > 0)
	{
		if (write(fd2, buf, count) < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
		count = read(fd1, buf, bytes);
	}
	if (count == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	close(fd1);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd2);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
