#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H
#include <stdarg.h>
/**
 * struct print - struct print formats
 * @type: data type
 * @f: pointer
 */

typedef struct print
{
	char type;
	void (*f)(va_list ap);
} print;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pchar(va_list ap);
void pint(va_list ap);
void pflo(va_list ap);
void pstr(va_list ap);


#endif
