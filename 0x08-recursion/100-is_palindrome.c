#include "main.h"
/**
 * len_rec - String length
 *
 * @s: char
 *
 * Return: the integer length
 */

int len_rec(char *s)
{
	if (*s)
	{
		s++;

		return (1 + len_rec(s));
	}
	return (0);
}

/**
 * fix_pal - determine the lenght
 *
 * @s: char
 *
 * @l: int
 *
 * @i: int
 *
 * Return: the integer length
 */

int fix_pal(char *s, int l, int i)
{
	if (i >= l)
	{
		return (1);
	}
	if (s[l] == s[i])
	{
		return (fix_pal(s, l - 1, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - cheak if a string is a palindrome
 * and 0 if not
 *
 * @s: char
 *
 * Return: the integer length
 */


int is_palindrome(char *s)
{
	int l = len_rec(s);
	int i = 0;

	return (fix_pal(s, l - 1, i));
}
