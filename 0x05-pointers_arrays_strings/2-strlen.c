#include "main.h"
#include <string.h>
/**
 *  _strlen - checks the lenght of a string
 *  @s: string to check
 *  Return: returns length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
