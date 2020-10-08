#include "holberton.h"
/**
 * _sqrt_recursion - sqrt
 * @n: power
 * @a: raised
 * Return: 0, -1
 */
int contador_recursion(int n, int a);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (contador_recursion(n, 0));
	}

}
/**
 * contador_recursion - function aux
 * @n: power
 * @a: raised
 * Return: a
 */
int contador_recursion(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (contador_recursion(n, (++a)));
	}
}
