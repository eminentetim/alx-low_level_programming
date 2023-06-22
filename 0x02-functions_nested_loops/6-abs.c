#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer to compute the absolute value
 *
 * Return: The absolute value of positive n
 */

int _abs(int n)
{
	int ans = n;

	while (n < 0)
	{
		ans = -n;
	}

	return (ans);
}
