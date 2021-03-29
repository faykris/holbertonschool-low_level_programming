#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to the
*					POSIX standard output.
*
* Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	unsigned int i = 0, j = 0;
	char buf[letters];

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	i = read(fd, buf, letters);

	close(fd);

	j = write(STDOUT_FILENO, buf, i);

	if (j == i)
	{
		return (j);
	}
	else
	{
		return (0);
	}
	return (i);

}
