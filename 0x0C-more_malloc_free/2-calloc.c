#include "holberton.h"
/**
 * _calloc - asigna memoria a un array
 * @nmemb: amount memory
 * @size: data type
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
