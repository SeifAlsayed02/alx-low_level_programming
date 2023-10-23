#include "main.h"
/**
 * *_strchr - Entry point
 * @s: The poniter of type char
 * @c: var of type char
 *
 * Return: None.
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
