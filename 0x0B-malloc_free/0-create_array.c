#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to initialize
 *
 * Return: returns char.0 otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
