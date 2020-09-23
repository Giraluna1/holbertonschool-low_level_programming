#include "holberton.h"

/**
 * jack_bauer - reloj
 *_putchar - print
 *
 */

void jack_bauer(void)
{
	int x, y, z, a;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 5; z++)
			{
				for (a = 0; a <= 9; a++)
				{
					_putchar(x + '0'); /* X es el valos de las horas */
					_putchar(y + '0'); /* y es el valor del segundo digito de las horas */
					_putchar(58); /* 58 es el valor de : */
					_putchar(z + '0'); /* z es el primer valor de los minutos */
					_putchar(a + '0'); /* a es el segundo valor de los minutos */
					_putchar ('\n');
					if (x == 2 && y == 3 && z == 5 && a == 9)
					return;
				}
			}
		}
	}
}
