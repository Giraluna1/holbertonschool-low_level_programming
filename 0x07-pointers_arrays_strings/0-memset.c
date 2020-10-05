#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer
 * @b: constante byte
 * @n: bytes of the memory area
 * Return: value s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
