#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - hecks whether a character is alphabet (a-z) or not.
 * @c: variable integre
 * Return: 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
