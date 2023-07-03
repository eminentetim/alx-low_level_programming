#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 *
 * @s: char pointer
 * @accept: char pointer
 *
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int cnt1 = 0, cnt2;

	while (s[cnt1] != '\0')
	{
		for (cnt2 = 0; accept[cnt2] != '\0'; cnt2++)
		{
			if (s[cnt1] == accept[cnt2])
			{
				break;
			}
		}
			if (!(accept[cnt2]))
			{
				break;
			}
			cnt1++;
	}
	return (cnt1);
}
