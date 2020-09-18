/**
 * main - is void
 * putchar - with an output stream of stdout
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
