#include "holberton.h"

/**
 * main - Program that copies file to another
 * @ac: is the counter of arguments
 * @av: is string of argument
 * Return: Always 0;
 */

int main(int ac, char **av)
{
	int fd, fd2, r = 0, w = 0, c = 0, c2 = 0;
	char *buf[1024];

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", av[0]);
	exit(97);
	}
}
