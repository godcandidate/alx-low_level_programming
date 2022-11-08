#include "main.h"
/**
 *  _puts - prints elements of a string
 *  @str: string to check
 *  Return: always 0
 */
void _puts(char *str)
{
        int i;

        i = 0;

        while (*(str + i))
        {
                _putchar(*(str + i));
                i++;
        }
        _putchar('\n');
}
