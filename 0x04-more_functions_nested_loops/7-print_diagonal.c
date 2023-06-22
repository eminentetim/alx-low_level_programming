#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times the character  should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int d, k;

	while (n <= 0)
	{
		putchar('\n');
		return;
	}

	for (d = 0; d < n; d++)
	{
		for (k = 0; k < d; k++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}



