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
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '0')
	{
		if (s[i] == 45)
			sign *= -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			result = result * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	return (result * sign);
}
