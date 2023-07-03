#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the contents of a 2D array
 * representing a chessboard.
 * @a: Pointer to an array of arrays (2D array) of characters.
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int k;

	while (i < 8)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[i][k]);
		}
		i++;
		printf("\n");
	}
}
