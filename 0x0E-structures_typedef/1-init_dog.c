#include "dog.h"
/**
 * init_dog - Entry point
 * @d: the dog
 * @name: The name
 * @age: the age
 * @owner: The owner
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
