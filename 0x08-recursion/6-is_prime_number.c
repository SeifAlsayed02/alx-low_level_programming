#include "main.h"

/**
 * is_prime_number - Entry Point
 * @n: number
 *
 * Return: None.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Checks if the number prime
 * @n: number
 * @i: The increment value
 *
 * Return: None.
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}
