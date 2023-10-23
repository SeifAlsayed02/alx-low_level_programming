#include "main.h"
/**
 * *_strpbrk - Entry point
 * @s: The poniter of type char
 * @accept: The poniter of type char
 *
 * Return: None.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);

}
