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
	for (i = '0'; i <= '9'; i++)
	{
		putchar(n);
		putchar(i);
	if (n < 57 || i < 57)
	{
		putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
