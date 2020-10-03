#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: string value
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122) /*a es 97, z es 122 */
			s[0] = s[0] - 32;

		if (s[i - 1] == 32 && (s[i] >= 97 && s[i] <= 122)) /* space es 32 */
			s[i] = s[i] - 32;
		if (s[i] == 46 && (s[i + 1] >= 97 && s[i + 1] <= 122)) /* . es 46 */
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '\t' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
		if (s[i] == '\n' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
