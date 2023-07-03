#include "main.h"
#include "stdio.h"

/**
 * print_diagsums- sum diagonal values
 *
 * @a: pointer to array
 *
 * @size: int
 *
 *Return: sum of two sides
 *
 */

void print_diagsums(int *a, int size)
{
	int count1, count2, side1, side2;

	side1 = 0;
	count1 = 0;


	while (count1 < size)
	{
		side1 += a[(size + 1) * count1];
		count1++;
	}

	side2 = 0;
	count2 = 0;

	while (count2 < size)
	{
		side2 += a[(size - 1) * (count2 + 1)];
		count2++;
	}

	printf("%d, %d\n", side1, side2);
}
