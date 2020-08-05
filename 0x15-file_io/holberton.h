#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cp_file(char *file1, char *file2, size_t bytes);
void printf_error_read(char *filename);
void printf_error_write(char *filename);
void printf_error_close(int filename);

#endif /* HOLBERTON_H */
