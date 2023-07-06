#include "main.h"

/**
 * wildcmp - Compares two strings and checks for a match
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 1 if the strings match, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
	{
		return (0);
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
