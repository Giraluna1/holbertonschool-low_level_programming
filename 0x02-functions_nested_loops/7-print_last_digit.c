#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - function
 * @n: number integre
 * _putchar - print the last digit
 * Return: the last digit value
 */
int print_last_digit(int n)

{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i  = -i;
		_putchar ('0' + i);
	}
	else
	{
		_putchar (i + '0');
	}
	return (i);
}
