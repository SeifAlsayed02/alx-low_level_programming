#include "dog.h"
/**
 * free_dog - Entry point
 * @d: The dog 
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
