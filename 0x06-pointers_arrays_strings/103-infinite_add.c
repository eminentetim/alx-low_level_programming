#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
        int len2 = strlen(n2);
        int max_len = (len1 > len2) ? len1 : len2;
        int carry = 0;
        int sum;
        int i;

	if (max_len + 1 > size_r)
        {
        	return 0;
        }

        r[max_len + 1] = '0';

	for (i = 0; i < max_len; i++)
	{
        	int digit1 = (i < len1) ? n1[len1 - 1 - i] - '0' : 0;
        	int digit2 = (i < len2) ? n2[len2 - 1 - i] - '0' : 0;

        	sum = digit1 + digit2 + carry;
        	carry = sum / 10;
        	r[max_len - i] = sum % 10 + '0';
    	}

	if (carry)
    	{
        	r[0] = carry + '0';
        	return (r);
    	}
	else
        {
        	return (r + 1);
	}
}
