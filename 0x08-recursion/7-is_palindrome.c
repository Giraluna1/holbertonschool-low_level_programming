#include "holberton.h"
/**
 * is_palindrome - string is a palindrome
 * @s: string
 * @n: acount
 * Return: 1 y 0
 */
int size_recursion(char *s, int n);
int _strlen_recursion(char *s);
int letter_checker(int i, int j, char *s);
int is_palindrome(char *s)
{
	int L;

	L = _strlen_recursion(s);
	return (letter_checker(0, L - 1, s));
}
/**
 * letter_checker - help letter checker
 * @i: counter left-right
 * @j: counter rigt-left
 * @s: string
 * Return: 0 o 1
 */
int letter_checker(int i, int j, char *s)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	return (letter_checker(++i, --j, s));
}
/**
 * _strlen_recursion - counter lenght
 * @s: string
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	return (size_recursion(s, 0));
}
/**
 * size_recursion - size length
 * @s: string
 * @n: acount
 * Return: size length
 */
int size_recursion(char *s, int n)
{
	if (*s == '\0')
	{
		return (n);
	}
	return (size_recursion(++s, ++n));
}
