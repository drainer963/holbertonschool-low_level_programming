#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free a dog
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (new_dog)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
	}
}
