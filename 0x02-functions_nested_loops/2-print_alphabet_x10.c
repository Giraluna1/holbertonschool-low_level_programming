#include "holberton.h"
/**
 * print_alphabet_x10 - Display the alphabet from a to z ten times
 *
 */

void print_alphabet_x10(void)

{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{ _putchar(ch);
		}
		_putchar('\n');
	}
}
