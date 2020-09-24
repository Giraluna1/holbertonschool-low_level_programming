#include "holberton.h"
/**
 * times_table - multiplication
 *
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int calculo = i * j;

			if (calculo >= 10)
			{
				_putchar(' ');
				_putchar ((calculo / 10) + '0');
				_putchar ((calculo % 10) + '0');
			}
			else 
			{
				if(j != 0)
				{
					_putchar (' ');
					_putchar (' ');
				}
					_putchar (calculo + '0');
			}
			if (j != 9)
				_putchar (',');
		}

		_putchar ('\n');
	}
}
