#include <stddef.h>
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: descibes a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
