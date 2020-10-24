#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prinst numers followed \n
 * @separator: comma and space
 * @n: number arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
if (separator)
{
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d\n", va_arg(ap, int));
	}
}
if (!separator)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
	}
}
}

