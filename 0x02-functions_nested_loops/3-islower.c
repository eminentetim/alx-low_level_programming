#include "main.h"
/**
 * int _is lower - print small letter
 * Return: 1 for true and false for 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
