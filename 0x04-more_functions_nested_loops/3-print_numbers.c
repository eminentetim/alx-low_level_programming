#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers,
 * from 0 to 9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
