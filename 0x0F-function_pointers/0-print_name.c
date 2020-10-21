#include "function_pointers.h"
/**
 * print_name - call function pointer
 * @name: string
 * @f: funtionc pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

