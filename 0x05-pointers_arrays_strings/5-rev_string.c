#include "holberton.h"
/**
 * rev_string - prints a string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	char c;
	int lenght, i;

	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{
	}
	for (i = 0; i < lenght; i++, lenght--)
	{
		c = s[lenght - 1];
		s[lenght - 1] = s[i];
		s[i] = c;
	}
}
