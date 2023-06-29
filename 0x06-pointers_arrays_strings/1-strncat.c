#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: holde the bytes for the  src
 * Return: Pointer to the resulting concatenated string.
 */


char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int j = 0;

	while (dest[index++])
	{
		j++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[j++] = src[index];
	}
	return (dest);
}
