/**
 * main - is void
 * putchar - with an output stream of stdout
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int n, i;

	for (n = '0'; n <= '9'; n++)
		for (i = n + 1; i <= '9'; i++)
	{
		putchar(n);
		putchar(i);
	if (n < 56 || i < 57)
	{
		putchar(44);
		if (n < 57 || i < 57)
		{
		putchar(32);
		}
	}
	}
	putchar('\n');
	return (0);
}
