#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match7
 *
 * Return: length of the segment
 */

char *_strpbrk(char *s, char *accept)
{
	if((s == NULL) || (accept == NULL))
		return NULL;
	while(*s)
	{
		if(strchr(accept, *s))
			return s;
		else
			s++;
	}
	return NULL;
}
