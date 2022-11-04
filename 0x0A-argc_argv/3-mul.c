#include <stdio.h>
/**
 * main - prints the results of two numbers 
 * argc - number of arguements
 * argv - an array that holds the arguements
 *
 * Return: Always 0.
 */

int main (int argc, char *argv[])
{
	int result = 0, a, b;

	if (argc == 3)
	{
		a = atoi (argv[1]);
		b = atoi (argv[2]);
		result = a * b;
		printf("%d\n", result);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
