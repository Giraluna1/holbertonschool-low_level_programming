#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: destino or final string
 * @src: fuente of string
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int l, i;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	dest[i + l] = '\0';
	return (dest);
}
