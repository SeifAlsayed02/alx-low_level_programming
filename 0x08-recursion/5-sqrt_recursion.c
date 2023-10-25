#include "main.h"
/**
 * _sqrt_recursion - Entry Point
 * @n: number to calculate the square root
 *
 * Return: None.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}

/**
 * check - Entry point
 * @n: number
 * @i: iteration
 *
 * Return: None.
 */
int check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check(n, i + 1));
}
