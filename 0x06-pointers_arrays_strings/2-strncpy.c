#include "main.h"

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
