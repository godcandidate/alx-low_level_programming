#include "main.h"
#include <string.h>
/**
 *  print_rev - prints a string in reverse order
 *  @s: string to check
 *  Return: always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	while (i > -1)
	{
		_putchar(*(s + i));
		i--;
	}

}
