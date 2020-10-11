#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string1
 * @accept: string2
 * Return: bytes to be calculate
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++) /*revise todas os caracteres de s */
	{
		for (b = 0; accept[b] != '\0'; b++) /*revise los caracteres de accept*/
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (0);
}
