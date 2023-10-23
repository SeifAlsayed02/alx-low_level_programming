#include "main.h"
/**
 * *_memset - Entry point
 * @s: The poniter of type char
 * @b: The poniter of type char
 * @n: Number
 *
 * Return: None.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return(s);
}
