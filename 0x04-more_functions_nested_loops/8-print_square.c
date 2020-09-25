#include "holberton.h"
/**
 * print_square - printe the square
 * @size: size of the square
 */
void print_square(int size)
{
	int n, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
