#include "holberton.h"
/**
 * array_range - create an array of integers
 * @min: range min
 * @max: range max
 * Return: Null, pointer
 */
int *array_range(int min, int max)
{
	int *a = NULL;
	int i, size;

	size = max - min + 1;

	a = malloc(size * sizeof(int));

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i <= size)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
