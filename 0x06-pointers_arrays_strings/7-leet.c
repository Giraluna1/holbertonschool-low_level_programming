#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string.
 * Return: value string.
 */
char *leet(char *s)
{
	int i, j;
	char leters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; leters[j]; j++)
		{
			if (s[i] == leters[j])
			{
				s[j] = numbers[i];
			}
		}
	}
	return (s);
}
