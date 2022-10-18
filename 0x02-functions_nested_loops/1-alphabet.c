#include "main.c"
#include "_putchar.c"

void print_alphabet(void);

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
