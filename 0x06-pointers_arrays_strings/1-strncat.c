#include "main.h"

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
		dest[j++] = src [index];
	}
	return (dest);
}

