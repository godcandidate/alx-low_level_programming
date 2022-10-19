#include <stdio.h>
void print_first_50_fibonacci(void);

/**
 * print_first_50_fibonacci - prints the first 50 fibonacci numbers
 */
void print_first_50_fibonacci(void)
{
	long int n1 = 1, n2 = 2, n3;
	int i;

	printf("1, 2, ");

	for (i = 0; i < 50; ++i)
	{
		n3 = n1 + n2;
		printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
	}
}

/**
 * main - prints the fibonacci numbers
 *
 * Return: Always 0.
*/
int main(void)
{
	print_first_50_fibonacci();
	return (0);
}