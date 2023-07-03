#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; s++)
	{
		unsigned int i = 0;

		while (accept[i] != '\0')
		{

			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
	}
	return (0);
}
