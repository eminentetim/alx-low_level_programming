#include "main.h"
#include <stdio.h>
/**
 * print_number - number
 * @n: is an integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int f = n;

	if (n < 0)
	{
		n *= -1;
		f = n;
		putchar('_');
	}
	f /= 10;
	if (f != 0)
	print_number(f);
	putchar((unsigned int) n % 10 + '0');
}
