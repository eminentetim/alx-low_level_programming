#include "main.h"
#include <stddef.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	for (*s != '\0' && strchr(accept, *s) != NULL)
	{
		l++;
		s++;
	}
	return (l);
}
