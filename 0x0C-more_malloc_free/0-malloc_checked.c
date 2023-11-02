#include "main.h"
/**
 * *malloc_checked - Entry point
 * @b: size
 *
 * Return: None.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
