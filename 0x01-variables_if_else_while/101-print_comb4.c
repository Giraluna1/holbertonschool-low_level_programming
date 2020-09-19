/**
 * main - is void
 * putchar - with an output stream of stdout
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int n, i, a;

	for (n = '0'; n <= '7'; n++)
		for (i = n + 1; i <= '8'; i++)
			for (a = i + 1; a <= '9'; a++)
	{
		putchar(n);
		putchar(i);
		putchar(a);
	if (n < 55 || i < 56 || a < 57)
	{
		putchar(44);
		if (n < 57 || i < 57 || a < 57)
		{
		putchar(32);
		}
	}
	}
	putchar('\n');
	return (0);
}
