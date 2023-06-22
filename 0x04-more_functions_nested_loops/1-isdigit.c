#include "main.h"

/**
 * _isdigit - checks for digit (0 through 9)
 *
 * @n: the character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
		return (0);
}
