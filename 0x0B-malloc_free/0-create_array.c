#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size
 * @c: specific char
 * Return: Null, pointer
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
