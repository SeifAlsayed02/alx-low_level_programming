#include "main.h"
/**
 * *_calloc - Entry point
 * @nmemb: inetger
 * @size: integer size
 *
 *
 * Return: None.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		((char *)ptr)[i] = 0;
	return (ptr);

}
