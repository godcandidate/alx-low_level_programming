#include "main.h"

/**
 * _mempcy - copy bytes to a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: Number of bytes to be filled
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, k;
	k = n;
	for(i = 0; i < k;i++)
		dest[i]=src[i];
	return (dest);
}
