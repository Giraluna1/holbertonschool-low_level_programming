#include "variadic_functions.h"
#include <stdio.h>
/**
 * pchar - print character
 * @ap: list
 */
void pchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * pint - print a integer
 * @ap: list
 */
void pint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * pflo - print a float
 * @ap: list
 */
void pflo(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * pstr - print a string
 * @ap: list
 */
void pstr(va_list ap)
{
	printf("%s", va_arg(ap, char *));
}
/**
 * print_all - print all data type
 * @format: data type
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	print arr[4] = {{'c', pchar}, 
		{'i', pint},
		{'f', pflo},
		{'s', pstr}
	};
	va_start(ap, format);	

	i = 0;
	while (format [i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].type)
			{
				arr[j].f(ap);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

