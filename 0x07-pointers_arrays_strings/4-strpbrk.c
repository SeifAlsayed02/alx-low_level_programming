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
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
			{
				s += i;
				return (s);
			}
	return (NULL);

}
