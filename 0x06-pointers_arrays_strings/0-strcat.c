#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * Return: Pointer to the resulting concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j])
	{
		j++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}



