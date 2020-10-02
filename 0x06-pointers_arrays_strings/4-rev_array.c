#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: the number of elements
 */

void reverse_array(int *a, int n)
{
	int c;
	int i;

	for (c = 0; c < n ; c++, n--)
	{
		i = a[n - 1];
		a[n - 1] = a[c];
		a[c] = i;
	}
}
