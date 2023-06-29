#include "main.h"

/**
 * string_toupper - Concatenates two strings.
 * @str: Pointer to the destination string.
 * Return: str
 */


char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

