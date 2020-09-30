#include "holberton.h"
/**
 * puts_half - prints half
 * @str: string
 */
void puts_half(char *str)
{
	int length, half;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (half = 0; str[half] != '\0'; half++)
	{
		if (half > ((length - 1) / 2))
		{
			_putchar (str[half]);
		}
      	}
	_putchar('\n');
}
