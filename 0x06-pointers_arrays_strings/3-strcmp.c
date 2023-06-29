#include "main.h"

/**
 * _strcmp - Concatenates two strings.
 * @s1: Pointer to the destination string.
 * @s2: Pointer to the source string.
 * Return: Pointer to the resulting concatenated string.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

