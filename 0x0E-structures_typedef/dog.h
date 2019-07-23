#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - info on dog.
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
