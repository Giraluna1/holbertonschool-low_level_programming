#include "holberton.h"

/**
 * read_textfile - function that read a file
 * @filename: file to read
 * @letters: amount of letters readed
 * Return: sise_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t m = 0, n = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buf, letters);

	m = write(STDOUT_FILENO, buf, letters);
	if (m < n)
		return (0);

	close(fd);
	return (n);
}

