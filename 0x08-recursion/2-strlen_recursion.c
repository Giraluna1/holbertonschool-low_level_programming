#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * @n: acount
 * Return: length value
 */
int size_recursion(char *s, int n);
int _strlen_recursion(char *s)
{
	return (size_recursion(s, 0));
}
/**
 * size_recursion - size length
 * @s: string
 * @n: acount
 * Return: size length
 */
int size_recursion(char *s, int n)
{
	if (*s == '\0')
	{
		return (n);
	}
	return (size_recursion(++s, ++n));
}
