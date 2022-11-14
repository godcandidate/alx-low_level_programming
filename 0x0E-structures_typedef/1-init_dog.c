#include "dog.h"
/*
 * init_dog - initialize struct dog
 * dog - struct dog
 * name - name of dog
 * age: age of dog
 * owner: owner of dog
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}


