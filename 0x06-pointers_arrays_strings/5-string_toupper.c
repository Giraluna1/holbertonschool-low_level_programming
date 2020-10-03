#include "holberton.h"

/**
 * string_toupper - changes  lowercase letters to uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 90)
			s[i] = s[i] - 32;
	}
	return (s);
}
