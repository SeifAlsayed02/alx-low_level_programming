#include "main.h"
/**
 * _puts_rev_recursion - Entry point
 * @s: The poniter of type char
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_puts_rev_recursion(s + 1);
	_putchar(*s);

}
