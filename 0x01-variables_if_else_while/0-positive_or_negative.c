#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main is void
 * Return: value is 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 0)
{
	printf("%d %s\n\n", n, "is positive");
}
else if (n < 0)
{
	printf("%d %s\n\n", n, "is negative");
}
if (n == 0)
{
	printf("%d %s\n\n", n, "is zero");
}
	return (0);
}
