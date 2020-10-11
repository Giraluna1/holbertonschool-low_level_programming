#include "holberton.h"

/**
 * _isalpha - hecks whether a character is (a-z) or not.
 * @c: variable integre
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
