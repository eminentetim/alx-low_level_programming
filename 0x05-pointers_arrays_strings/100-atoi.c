#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	unsigned int ni = 0;
	int c = 0;
	int min = 1;
	int isi = 9;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}
