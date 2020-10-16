#include "holberton.h"
#include <stdio.h>
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

	if (min > max)
		return (NULL);
	size = max - min;
	if (size != max)
		size++;
	a = malloc((size + 1)  * sizeof(int));

	if (a == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
