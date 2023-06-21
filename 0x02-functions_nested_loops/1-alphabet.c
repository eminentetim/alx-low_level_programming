#include "main.h"

/**
 * main - is void
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z' + 1 )
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
