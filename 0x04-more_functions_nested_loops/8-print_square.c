#include "main.h"
#include <stdio.h>


/**
 * print_square - prints a square in the terminal
 * @size: the size of the square to be printed
 *
 * Return: void
 */
void print_square(int size)
{
	int l, b;

	while (size <= 0)
	{ putchar('\n');
		return;
	}

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
		{
			putchar('#');
		}
			putchar('\n');
	}
}
