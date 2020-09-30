#include "holberton.h"
/**
 * puts2 - prints number pares
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		if (str[i] > 0)
		{
			i += 1;
		}
	}
	_putchar('\n');
}
