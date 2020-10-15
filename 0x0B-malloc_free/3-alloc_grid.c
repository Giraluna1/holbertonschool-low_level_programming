#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - return a pointer to a 2 dimensinal array of integers
 * @width: 1 dimension
 * @height: another dimension
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(matrix + i) = malloc(width * sizeof(int));

		if (*(matrix + i) == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(matrix + i) + j) = 0;
		}
	}
	return (matrix);
}
