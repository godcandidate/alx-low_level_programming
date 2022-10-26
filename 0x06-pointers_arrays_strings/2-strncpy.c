#include "main.h"

/**
 * _strncpy - cpoies a string
 * @dest: first string
 * @src: second word
 * @n: number of bytes
 *
 * Return: returns concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
		j++;

	while (i < n)
	{
		if (i < j)
			dest[i] = src[i];

		else
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

