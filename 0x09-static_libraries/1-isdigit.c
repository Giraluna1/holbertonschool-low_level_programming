#include "holberton.h"
/**
 * _isdigit - check for a digit
 * @c: digit or not digit
 * Return: 0 o 1
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
