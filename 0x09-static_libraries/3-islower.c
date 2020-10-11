#include "holberton.h"

/**
 * _islower - hecks whether a character is lowercase alphabet (a-z) or not.
 * @c: variable integre
 * Return: 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
