#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: The number of times the character _ should
 *  be printed.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
