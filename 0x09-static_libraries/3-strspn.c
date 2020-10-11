#include "holberton.h"
/**
 * _strspn - calculates the lenht of str1
 * @s: string1
 * @accept: string2
 * Return: bytes to be calculate
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c = 0;
	unsigned int ac = 0;

	for (a = 0; s[a] != '\0'; a++) /*revise todas os caracteres de s */
	{
		ac = c;
		for (b = 0; accept[b] != '\0'; b++) /*revise los caracteres de accept*/
		{
			if (accept[b] == s[a])
			{
				c++; /*sumeme uno*/
			}
		}
		if (ac == c) /* para verificar que c si acumulo */
			return (c);
	}
	return (c);
}
