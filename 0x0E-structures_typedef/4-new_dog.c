#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - copy struct.
 * @age: float
 * @name: char pointer
 * @owner: char pointer
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	return (new_dog);
}
/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: char pointer
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *newstr;
	char *tmp;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	newstr = malloc(len + 1);
	if (newstr == '\0')
	{
		return (NULL);
	}
	tmp = newstr;
	while (*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (newstr);
}
