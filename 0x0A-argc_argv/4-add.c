#include "holberton.h"
/**
 * main - two parameters
 * @argc: count
 * @argv: value
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, a = 0, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a = a + atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
