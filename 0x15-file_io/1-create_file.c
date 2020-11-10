#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: file to read
 * @text_content: what will be written
 * Return: -1 1 o 0-
 */

int create_file(const char *filename, char *text_content)
{

	int fd;
	int n = 0;

	if (!filename)
		return (-1);


	if (!text_content)
	{
		fd = open(filename, O_CREAT);

		return (0);
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
			return (0);

		n = write(fd, text_content, 400);
		if (!n)
			return (-1);
	}


	close(fd);
	return (1);
}

