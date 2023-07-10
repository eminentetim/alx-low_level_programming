#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	concat = malloc(sizeof(char) *  (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
