#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 * @str: The string to reverse.
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while  (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

