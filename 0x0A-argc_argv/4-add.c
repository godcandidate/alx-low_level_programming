#include <stdio.h>
#include <ctype.h>
/**
 * main - adds infinite number of arguements
 * argc - number of arguements
 * argv - an array that holds the arguements
 *
 * Return: Always 0.
 */

int main (int argc, char *argv[])
{
	int result = 0, i = 1;
	int a;

	if (argc < 1)
	{
		printf("0\n");
	}

	else
	{
		while (i < argc)
		{
			a = atoi (argv[i]);
			if (a != 0)
				result += a;
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", result);
	}

	return (0);
}

