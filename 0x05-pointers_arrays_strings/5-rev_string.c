#include "main.h"
#include <string.h>
/**
 *  rev_string - store a string in reverse order
 *  @s: string to check
 *  Return: always 0
 */
void rev_string(char *s)
{
	char revs = s[0];
	int k = 0;
	int i;

	while (s[k] != '\0')
		k++;
	for (i = 0; i < k; i++)
	{
		k--;
		revs = s[i];
		s[i] = s[k];
		s[k] = revs;
	}

}
