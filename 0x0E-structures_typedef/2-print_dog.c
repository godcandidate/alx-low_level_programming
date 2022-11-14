
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: Always nothing.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == 0)
			printf("Age: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
