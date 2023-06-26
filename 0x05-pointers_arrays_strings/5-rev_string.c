#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 * @s: The string to reverse.
 */

void rev_string(char *s)
{
	char *begining = s;
	char *end = s;

	while  (*end)
	{
		end++;
	}
	end--;

	while (begining < end)
	{
		char tem = *begining;
		*begining = *end;
		*end = tem;
		begining++;
		end--;
	}
}



