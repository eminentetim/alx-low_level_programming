#include "main.h"

/**
 * int _isalpha - is int c
 * Return: 1 for success and 0 for fail
 */
int _isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c < 'z'))
		return (1);
	else
		return (0);
}
