#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase 
 * @dest: string to change
 * Return: returns uopercase strings
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}

