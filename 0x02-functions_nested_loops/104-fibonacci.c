#include <stdio.h>

void print_first_98_fibonacci(void);

/**
 * print_first_98_fibonacci - prints the first 50 fibonacci numbers
 */
void print_first_98_fibonacci(void)
{
	float n1 = 1, n2 = 2, n3;
	int i;

	printf("1, 2, ");

	for (i = 2; i < 98; ++i)
	{
		n3 = n1 + n2;
		if (i != 49)
			printf("%.0f, ", n3);
		else
			printf("%.0f", n3);
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
	print_first_98_fibonacci();
	return (0);
}
