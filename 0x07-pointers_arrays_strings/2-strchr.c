#include "holberton.h"
/**
 * _strchr - locates a charactes in a string
 * @s: string pointer
 * @c: character
 * Return: pointert if the first occurrence of the character c in s else NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
		return (s);
		}
	}
	if (*s == '\0')
	return (0);
	else
		return (0);
}
