#include "holberton.h"
/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: unused
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (argv[a] != argv[argc])
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
