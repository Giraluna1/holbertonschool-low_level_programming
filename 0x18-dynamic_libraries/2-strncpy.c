#include "holberton.h"
/**
 * _strncpy - copy strings
 * @dest: destino or final string
 * @src: fuente of string
 * @n: byte
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l, i, a;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (a = 0; a < n; a++)
	{
		if (a <= i)
		{
		dest[a] = src[a];
		}
		else
		{
			dest[a] = '\0';
		}
	}
	return (dest);
}
