#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - check the code for ALX students.
 *@s: hold the value of char
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
