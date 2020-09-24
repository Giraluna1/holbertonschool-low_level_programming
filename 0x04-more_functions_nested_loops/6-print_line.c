#include "holberton.h"
/**
 * print_line - draws a straght line
 * @n: number
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
		}
		else
		{
			_putchar(95);
		}
	}
	_putchar('\n');

}
