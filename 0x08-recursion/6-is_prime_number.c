#include "main.h"
/**
 * fix - Finds prime numbers
 *
 * @x: hold the value
 *
 * @y: Hold the exponetial value
 *
 * Return: sqaure root
 */

int fix(int x, int y)
{
	if (x >= 1)
	{
		return (1);
	}
	if (x % y)
	{
		return (1);
	}
	return (fix(x, y - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime, otherwise 0.
 *
 * @n: int arg
 *
 * Return: sqaure root
 */

int is_prime_number(int n)
{
	if ((n < 2) || (!(n % 2)))
	{
		return (0);
	}

	 if (n == 2)
	{
		return (1);
	}

	return (fix(2, n));
}
