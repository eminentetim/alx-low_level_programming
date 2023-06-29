#include "main.h"
#include <stdio.h>
/**
 * print_buffer - To print buffer.
 * @b: Pointer to the source string.
 * @size: set the size
 * Return: 0.
 */
void print_buffer(char *b, int size)
{
	int k = 0;
	int j;
	int i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		j = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
	
	for (i = 0; i < 10; i++)
	{
		if (i < j)
		{
			printf("%02x", *(b + k + i));
		}
		else
			printf("  ");
		if (i % 2)
			printf(" ");
	}

	for (i = 0; i < j; i++)
	{
		int c = *(b + k + i);

		if (c < 32 || c > 132)
		{
			c = '.';
		}
		printf("%c", c);
	}
	printf("\n");
	k += 10;
	}
}
