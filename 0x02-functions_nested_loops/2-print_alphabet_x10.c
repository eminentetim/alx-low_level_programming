#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet
 * 10 times
 * followed by a newline.
 */

void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n < 10; n++)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
	}
}
