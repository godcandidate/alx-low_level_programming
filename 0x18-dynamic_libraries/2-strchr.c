#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: destination to copy to
 * @c: source to copy from
 *
 * Return: Returns a pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
