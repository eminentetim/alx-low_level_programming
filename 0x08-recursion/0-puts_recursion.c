#include "main.h"

/**
 * _puts_recursion - Prints a string,
 * followed by a new line.
 * @s: The string to be printed.
 *
 */
void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
