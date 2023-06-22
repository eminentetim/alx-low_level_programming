#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 *Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
		i++;
	}
}
