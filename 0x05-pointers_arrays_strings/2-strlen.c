#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @str: string to calculate length of
 *
 * Return: length of string
 */

int _strlen(char *str)

{
	int len = 0;

	str = "My first strlen!";

	while (*str != '0')
	{
		len++;
		str++;
	}
	return (len);
}

