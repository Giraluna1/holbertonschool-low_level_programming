#include "holberton.h"
/**
 * swap_int - swap *a and *b
 * @a: value 98
 * @b: value 42
 */
void swap_int(int *a, int *b)
{
	int i, n;

	i = *a;
	n = *b;

	*a = n;
	*b = i;
}
