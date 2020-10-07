#include "holberton.h"
/**
 * _pow_recursion - returns the value os raise to he power
 * @x: raise
 * @y: power
 * Return: 0, -1 value of x a la y
 */
int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
