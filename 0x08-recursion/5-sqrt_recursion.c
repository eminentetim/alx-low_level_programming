#include "main.h"

/**
 * square - function to loop the new second variable
 *
 * @s: hold the value
 * @sqr: int arg
 *
 * Return: sqaure root
 */

int square(int s, int sqr)
{
	if (sqr * sqr > s)
	{
		return (-1);
	}
	else if (sqr * sqr == s)
	{
		return (sqr);
	}
	else
		return (square(s, sqr + 1));
}

/**
 * _sqrt_recursion - natural square root of a number
 *
 * @n: int arg
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 0));
}
