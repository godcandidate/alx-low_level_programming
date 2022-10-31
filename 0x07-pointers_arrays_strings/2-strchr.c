#include "main.h"
#include <stdio.h>
/**
 * _mempcy - copy bytes to a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: Number of bytes to be filled
 *
 * Return: Returns a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; ++s)
  		if (*s == c)
			return (char *) s;
	return NULL;
}
