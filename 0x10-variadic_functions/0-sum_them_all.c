#include "variadic_functions.h"
/**
 * sum_them_all - sum all arguments
 * @n: numbers elements
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (sum);
}

