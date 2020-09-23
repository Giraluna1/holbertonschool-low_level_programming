#include "holberton.h"
/**
* print_sign - pritn the sign of a number
* _putchar - print the character
* @n: value sign
* Return: 0 1 -1
*/

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	if (n == 0)
	_putchar(48);
	return (0);
	_putchar('\n');
}
