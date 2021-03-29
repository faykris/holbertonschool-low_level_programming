#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/* writes the character c to stdout. */
int _putchar(char c);

/* 0. Reads a text file and prints it to the POSIX standard output. */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1. Function that creates a file. */
int create_file(const char *filename, char *text_content);

/* 2. Function that appends text at the end of a file. */
int append_text_to_file(const char *filename, char *text_content);

#endif
