#include "holberton.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: numbers of arguments
 * @argv: arguments content
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0, br, bw;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	buf = malloc(1024);
	br = read(fd1, buf, 1024);
	if (fd1 == -1 || br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	bw = write(fd2, buf, br);
	free(buf);
	if (fd2 == -1 || bw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close(fd1);
	close(fd2);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd FD_VALUE %d\n", fd1);
		exit(100);
	}
	else if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd FD_VALUE %d\n", fd2);
		exit(100);
	}
	return (0);
}