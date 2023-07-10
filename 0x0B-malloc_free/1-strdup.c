#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL
 */

char *_strdup(char *str)
{
	int len = 0;
	char *dup;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL && str == NULL)
	{
		return (0);
	}

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}

