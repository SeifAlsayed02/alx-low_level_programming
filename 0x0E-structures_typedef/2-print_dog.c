#include "dog.h"
/**
 * print_dog - Entry Point
 * @d: pointer to dog
 *
 * Return: None.
 */
void print_dog(struct dog *d)
{
	if(d == NULL)
		return;

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
