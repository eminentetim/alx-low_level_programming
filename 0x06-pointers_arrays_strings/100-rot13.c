#include "main.h"

/**
 * rot13 - encode the value of x.
 * @x: compare the letters.
 * Return: n
 */


char *rot13(char *x)
{
	char *y = x;

	while (*y != '\0')
	{
		if ((*y >= 'A' && *y <= 'M') || (*y  >= 'a' && *y <= 'm'))
		{
			*y += 13;
		}
		else if ((*y >= 'N' && *y <= 'Z') || (*y >= 'n' && *y <= 'z'))
		{
			*y -= 13;
		}
		y++;
	}
	return (x);
}
