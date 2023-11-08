#include "function_pointers.h"
/**
 * print_name - Entry point
 * @f: the function
 * @name: The name
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
