#include "main.h"
#include <string.h>
/**
 *  puts2 - prints the even characters of a string
 *  @str: string to check
 *  Return: always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
