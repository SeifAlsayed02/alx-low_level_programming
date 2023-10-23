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
	char *flag = NULL;


	if (c == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			flag = s;
			return (flag);
		}
		s++;
	}
	return (flag);
}
