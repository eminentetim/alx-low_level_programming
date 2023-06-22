#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @i: the integer value of the character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int i)
{
	while (i >= 65 && i <= 90)
	{
		return (1);
	}
	return (0);
}
