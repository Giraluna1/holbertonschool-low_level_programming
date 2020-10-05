#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer destino
 * @src: pointer source
 * @n: bytes of the memory area
 * Return: value dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
