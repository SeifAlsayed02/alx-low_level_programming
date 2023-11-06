#include "dog.h"
/**
 * new_dog - Entry point
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: None.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL || name == NULL || owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->name = strdup(name);
	d->owner = strdup(owner);
	return (d);
}
