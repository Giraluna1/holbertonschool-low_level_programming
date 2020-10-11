#include "holberton.h"
/**
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	/* unsigned int c;
	   unsigned int ac;*/

	for (a = 0; *haystack != '\0'; haystack++)
	{
		/* ac = c;*/
		for (b = 0; *needle != '\0'; needle++)
		{
			if((haystack[a] == needle[b]) || (haystack[a] + 1 == needle[b] + 1))
			{				
				return (&haystack[a]);
			}
		}
	}
	return (0);
}
