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

for (i = 0; i < n; i++)
{
	if (separator)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(ap, int), separator);
		else
			printf("%d", va_arg(ap, int));
	}
	else
		printf("%d", va_arg(ap, int));
}
printf("\n");
va_end(ap);
}

