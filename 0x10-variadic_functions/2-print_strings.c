#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prinst strings followed \n
 * @separator: comma and space
 * @n: number arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (!s)
			s = "(nil)";
		if (separator && i < n - 1)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(ap);
}
