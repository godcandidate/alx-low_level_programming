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

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
		if (i >= n)
			break;
	}
	dest[j] = '\0';
	n = 6;
	return (dest);
}

