#include "holberton.h"
/**
 * is_prime_number - input integer is a prime number
 * @n: prime number
 * @m: n - 1
 * Return: 0 o 1
 */
int function_divider(int n, int m);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n % 2 == 0 && n != 2)
	{
		return (0);
	}
	else
		return (function_divider(n, n - 1));
}
/**
 * function_divider - help to divide
 * @n: prime number
 * @m: n - 1
 * Return: 0 o 1
 */
int function_divider(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else if (n % m != 0)
	{
		return (function_divider(n, m - 1));
	}
	return (0);
}
