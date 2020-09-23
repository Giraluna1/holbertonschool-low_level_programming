#include "holberton.h"
#include <ctype.h>
/**
 * _islower - hecks whether a character is lowercase alphabet (a-z) or not.
 * @c: variable integre
 * Return: 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
