#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to search in 
 *
 * Return: length of the segment
 */

char *_strstr(char *haystack, char *needle)
{
	static char* ptr;
	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
			return ptr;
		ptr++;
	}
	return NULL;
}
