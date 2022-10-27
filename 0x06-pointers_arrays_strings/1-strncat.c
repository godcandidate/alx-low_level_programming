#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second word
 * @n: number of bytes
 *
 * Return: returns concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

