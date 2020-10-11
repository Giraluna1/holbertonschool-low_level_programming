#include "holberton.h"
/**
 * main - two parameters
 * @argc: count
 * @argv: value
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1] != argv[argc] && argv[2] != argv[argc])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
