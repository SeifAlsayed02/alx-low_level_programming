#include "main.h"
/**
 * factorial - Entry point
 * @n: Number to calc fact
 *
 * Return: None.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
