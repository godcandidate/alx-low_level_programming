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
	int i = 0, j = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		if (i < n)
			break;
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

