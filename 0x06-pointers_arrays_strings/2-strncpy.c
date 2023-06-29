#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: hold the vale of src in bytes
 * Return: Pointer to the resulting concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int i = 0;

	while  (src[index++])
	{
		i++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = i; index < n; index++)
	{

		dest[index] = '\0';
	}
	return (dest);
}
