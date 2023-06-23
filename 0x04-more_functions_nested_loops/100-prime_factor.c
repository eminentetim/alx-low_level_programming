#include <stdio.h>


/**
 * main - finds and prints the largest prime factor
 * of 612852475143
 *
 * Description: This program finds and prints the
 * largest prime factor of
 * the number 612852475143, followed by a new line.
 * It does this by starting with the smallest
 * prime factor (2)and dividing the number
 * by it until it is no longer a factor.
 * Then it moves on to the next prime factor and
 * repeats until the largest prime factor is found.
 * Return: 0
 */

int main(void)
{
	long int i = 612852475143;
	int big_factor = 2;

	while (i > big_factor)
	{
		if (i % big_factor == 0)
		{
			i = i / big_factor;
			big_factor = 2;
		}
		else
		{
			big_factor++;
		}
	}
	printf("%d", big_factor);
	return (0);
}
