#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the square
 */
void print_triangle(int size)
{
	int n, j, a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (a = n; a <= size; a++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
