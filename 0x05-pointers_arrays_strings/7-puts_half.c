#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to print.
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start = len / 2;

	if (len % 2 == 1)
	{
		start++;
	}

	while (start < len)
	{
		putchar(str[start]);
		start++;
	}
	putchar('\n');
}

