#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to be searched in the array
 * @c: Character to be located in the memory
 * Return: Pointer to the first occurrence of the
 * character in the string
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
