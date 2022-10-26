#include "main.h"
/**
 * 3-strcmp.c - compares two strings
 * @s1: first string
 * @s2: second word
 *
 * Return: returns compared results
 */
int _strcmp(char *s1, char *s2)
{
	int value = 0, i = 0, j = 0;
	int ascii, ascii2;

	while (s2[i] != '\0')
		i++;
	i = i - 1;

	while (s2[j] != '\0')
	{
		ascii = (int)s1[j];
		ascii2 = (int)s2[j];

		if (s1[j] == s2[j])
		{
			if (j != i)
			{
				j++;
				continue;
			}
			break;
		}
		else
		{
			value = ascii - ascii2;
			break;
		}
	}
	return (value);
}

