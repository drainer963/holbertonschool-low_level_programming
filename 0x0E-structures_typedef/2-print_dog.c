#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct elements.
 * @d: struct pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
	else
		printf("(nil)");
}
