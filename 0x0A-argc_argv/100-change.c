#include "holberton.h"
/**
 * main - the minimun number of coins
 * @argc: count
 * @argv: value
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int counter = 0;
	int n = 0, i;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (n - a[i] >= 0)
			{
				n = n - a[i];
				counter++;
			}
		}
	}
	printf("%d\n", counter);
	return (0);
}
