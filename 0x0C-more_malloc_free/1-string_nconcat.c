#include "holberton.h"
#include <stdio.h>
/**
 * string_nconcat - concatena n charac second string
 * @s1: string 1
 * @s2: string 2
 * @n: n charac
 * Return: ptr, Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int  i1, i2, j, k;
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
	ptr = malloc(((i1 + n) + 1) * sizeof(char));
	if (ptr == NULL)
	return (NULL);
	for (j = 0; j < i1; j++)
	{
		ptr[j] = s1[j];
	}
	if (n >= i2)
		n = i2;
	for (k = 0; j < (i1 + n); j++, k++)
	{
		ptr[j] = s2[k];
	}
	ptr[j] = '\0';
	return (ptr);
}
