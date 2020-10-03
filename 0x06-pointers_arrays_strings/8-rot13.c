#include <stdio.h>
#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @ptr: pointer.
 * Return: ptr
 **/
char *rot13(char *ptr)
{
	int i, j;
	char ABCFULL[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ptr[i] != 0; i++)
	{
		for (j = 0; ABCFULL[j] != 0; j++)
		{
			if (ptr[i] == ABCFULL[j])
			{
				ptr[i] = n[j];
				break;
			}
		}
	}
	return (ptr);
}
