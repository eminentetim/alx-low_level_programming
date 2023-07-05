#include "main.h"
/**
 * factorial - returns the length of a string
 *
 * @n:  holds the  arg
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
