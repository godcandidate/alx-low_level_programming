#include "main.h"

/**
 * palindrome_2 - obtains length of string
 * @s: string
 * @l: length counter
 *
 * Return: On success 1.
 */

int palindrome_2(char *s, int l)
{
	if (*s == 0)
		return (l - 1);
	return (palindrome_2(s + 1, l + 1));
}

/**
 * palindrome_3 - compares string vs string reverse
 * @s: string
 * @l: length
 *
 * Return: On success 1.
 */

int palindrome_3(char *s, int l)
{
	if (*s != *(s + l))
		return (0);
	else if (*s == 0)
		return (1);
	return (palindrome_3(s + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindrome_2(s, 0);
	return (palindrome_3(s, l));
}
