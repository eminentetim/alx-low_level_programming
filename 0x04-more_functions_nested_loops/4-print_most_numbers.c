#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers,
 *  from 0 to 9, followed by a new line,
 *  except 2 and 4
 *  Return: void.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			putchar(n + '0');
		}
	}
	putchar ('\n');
}
