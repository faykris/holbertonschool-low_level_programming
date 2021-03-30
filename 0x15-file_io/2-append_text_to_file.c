#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file to create
 * @text_content: tex contain for the file
 *
 * Return: 1 on success. On error -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}	
	write(fd, text_content, i);
	close(fd);

	return (1);
}
