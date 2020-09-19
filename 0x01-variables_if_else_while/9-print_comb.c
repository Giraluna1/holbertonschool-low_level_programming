/**
 * main - is void
 * putchar - with an output stream of stdout
 * Return: value 0
 */

#include <stdio.h>

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{		
	        putchar(n);     	
		if (n < 57)
	       
		{
		putchar(44); /*44 es el valor para la "," */
		putchar(32); /*32 es el valor del espacio */	 
		}
	}
	putchar('\n');
	return (0);
}
