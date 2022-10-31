#include "main.h"

/**
 * leet - change strings to in
 * @s: address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, k;
	k = n;
	for(i = 0; i < k; i++)
		s[k]=b;
	return (s);
}
