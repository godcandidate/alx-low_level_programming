#include "main.h"

/**
 * _memcpy - copy bytes to a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: Number of bytes to be filled
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
