#include "dog.h"
/*
 * init_dog - initialize struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: returns nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}


