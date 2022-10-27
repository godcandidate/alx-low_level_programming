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
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

