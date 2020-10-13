#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicate a string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{

	int i = 0;
	char *ptr = NULL;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '0'; len++)
	{
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
