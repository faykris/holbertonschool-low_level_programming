#include "holberton.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file to create
 * @text_content: tex contain for the file
 *
 * Return: 1 on success. On error -1.
 */
int create_file(const char *filename, char *text_content)
{

	int fd1 = 0, i = 0, fd2 = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[i])
	{
		i++;
	}
	fd1 = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0600);
	if (fd1 == -1)
	{
		return (-1);
	}
	fd2 = write(fd1, text_content, i);
	close(fd1);
	if (fd2 == -1)
	{
		return (-1);
	}
	return (1);
}
