#include "main.h"

/**
* swap_int - void
* @a: hold the value of integer
* @b: holds the value of the second integer
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
