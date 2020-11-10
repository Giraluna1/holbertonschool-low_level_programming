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
	int i, n = 0;

	if (!filename)
		return (-1);



	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (!text_content)
	{
		n = write(fd, "", 1);
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		n = write(fd, text_content, i);
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

