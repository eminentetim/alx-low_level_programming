#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to calculate length of
 *
 * Return: length of string
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

