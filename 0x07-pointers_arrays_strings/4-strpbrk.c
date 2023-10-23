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
	while (*accept)
	{
		while (*s)
		{
			if (*s == *accept)
				return (s);
			s++;
		}
		accept++;
	}
	return (NULL);

}
