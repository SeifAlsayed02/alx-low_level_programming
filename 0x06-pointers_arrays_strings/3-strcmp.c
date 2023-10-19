#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: The poniter of type char
 * @s2 : Pointer of type Char
 *
 * Return: None.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
