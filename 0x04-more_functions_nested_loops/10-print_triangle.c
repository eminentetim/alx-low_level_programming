#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of # characters
 * @size: the size of the triangle to print
 *
 * Description: This function prints a triangle of # characters,
 * with a base and height of size, followed by a new line.
 * If size is less than or equal to 0,
 * the function prints only a new line.
 * Return: void
 */
void print_triangle(int size)
{
	int t, r;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (t = 1; t <= size; t++)
	{
		for (r = 1; r <= t;  r++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
