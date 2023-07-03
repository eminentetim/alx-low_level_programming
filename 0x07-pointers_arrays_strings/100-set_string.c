#include "main.h"

/**
 * set_string - Sets the value of a pointer to a string.
 * @s: Pointer to a pointer to a character (string).
 * @to: Pointer to a character (string).
 * Return: None.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
