#include "holberton.h"
#include <stdio.h>
/**
 * @r: number int 
 * @ld: last digit of r
 * print_last_digit - print last digit of a number 
 * _putchar - print the last digit
 * Return: the last digit value
 */
int print_last_digit(int r)
{
	int ld;
	ld = r % 10;
	_putchar(ld);
	return (ld);

}
