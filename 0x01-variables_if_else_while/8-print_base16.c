/**
 * main - is void
 * putchar - with an output stream of stdout
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n > 9)
		{
			putchar((n - 10) + 97);
		}
		else
		{
			putchar (n + 48);
		}
	}
	putchar('\n');
	return (0);
}
