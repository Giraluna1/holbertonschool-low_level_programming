#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @ptr: pointer
 * Return: value string.
 */
char *leet(char *ptr)
{
	int i, j;
	char leters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; ptr[i] != 0; i++)
	{
		for (j = 0; leters[j] != 0; j++)
		{
			if (ptr[i] == leters[j])
			{
				ptr[i] = numbers[j];
			}
		}
	}
	return (ptr);
}
