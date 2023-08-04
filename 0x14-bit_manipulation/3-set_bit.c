#include "main.h"


/**
 * set_bit - convert real number to binary.
 * @n: is the integer
 * @index: the lenght of the integer.
 *
 * Return: binary.
 **/




int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 8 * sizeof(unsigned long int);
	unsigned long int k = 1UL << index;

	if (n == NULL || index >= size)
	{
		return (-1);
	}

	*n |= k;
	return (0);
}
