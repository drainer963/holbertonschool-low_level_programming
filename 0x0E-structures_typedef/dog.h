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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
char *_strdup(char *str);
#endif
