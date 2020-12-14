#include "holberton.h"
/**
 * _strncat - cancatenate mos n bytes
 * @dest: destino
 * @src: fuente
 * @n: byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)

{

	int l, i;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	if (n > i)
		n = i;
	for (i = 0; i < n ; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}
