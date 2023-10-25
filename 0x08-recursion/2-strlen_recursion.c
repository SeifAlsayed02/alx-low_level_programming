#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
