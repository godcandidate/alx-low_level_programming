#include "main.h"
#include <stdio.h>
/**
 * _mempcy - copy bytes to a string
 * @s: string to be scanned
 * @accept: string containing the characters to match7
 *
 * Return: length of the segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len =0;
	if((s == NULL) || (accept == NULL))
        	return len;
	while(*s && strchr(accept,*s++))
		len++;
	return len;
}
