#include "main.h"
/**
 * _strstr - Function that locates a substring.
 *
 * @needle: char pointer
 * @haystack: char pointer
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; haystack[0]; haystack++)
	{
		int locate = 0;

		while (haystack[locate] == needle[locate])
		{
			if (!(needle[locate]))
			{
				return (haystack);
			}
			locate++;
		}
	}
	return (0);
}
