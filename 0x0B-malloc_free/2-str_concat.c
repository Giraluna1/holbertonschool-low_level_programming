#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenar two strings
 * @s1: string 1
 * @s2: string 2
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{

	int k, i1, i2, j;
	char *ptr;

	if (!s1)
	{
		i1 = 0;
	}
	else
		for (i1 = 0; s1[i1] != '\0'; i1++)
		{
		}

	if (!s2)
	{
		i2 = 0;
	}
	else
		for (i2 = 0; s2[i2] != '\0'; i2++)
		{
		}

	ptr = malloc(((i1 + i2) + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	for (j = 0; j < i1; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; j < (i1 + i2); k++, j++)
	{
		ptr[j] = s2[k];
	}
	ptr[j] = '\0';
	return (ptr);
}
