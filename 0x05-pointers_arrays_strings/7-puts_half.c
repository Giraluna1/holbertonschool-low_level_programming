#include "holberton.h"
/**
 * puts_half - prints half
 * @str: string
 */
void puts_half(char *str)
{
	int length, half, n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}
	for (n = half; n <= length; n++)
	{
		_putchar (str[n]);
	}
	_putchar('\n');
}
