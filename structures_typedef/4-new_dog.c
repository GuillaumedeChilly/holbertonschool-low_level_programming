#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - custom strdup for new_dog
 * @str: string to duplicate
 * Return: pointer, or NULL
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *copy;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(len + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
