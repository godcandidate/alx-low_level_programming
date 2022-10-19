#include <stdio.h>
void print_sum_fibonacci(void);

/**
 * print_sum_fibonacci - prints sum of fibo lessthan 400000
 */
void print_sum_fibonacci(void)
{
	long int n1 = 1, n2 = 2, n3, sum = 0;
	int i;

	sum = 2;

	for (i = 2; i < 50; ++i)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (n3 < 4000000)
		{
			if (n3 % 2 == 0)
				sum += n3;
		}
		else
			break;
	}
	printf("%ld/n", sum);
}

/**
 * main - prints the fibonacci numbers
 *
 * Return: Always 0.
*/
int main(void)
{
	print_sum_fibonacci();
	return (0);
}
