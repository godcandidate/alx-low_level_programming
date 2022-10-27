#include "main.h"

/**
 * rot13 - encodes in ROT13
 * @s: string to encode
 * Return: returns encoded string.
 */

char *rot13(char *s)
{
	int i, j;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}

	return (s);
}
