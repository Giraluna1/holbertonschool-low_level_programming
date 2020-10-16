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

	i = min;
	if (min > max)
		return (NULL);
	for (size = 0; i <= max; size++, i++)
		;
	a = malloc(size  * sizeof(int));

	if (a == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
