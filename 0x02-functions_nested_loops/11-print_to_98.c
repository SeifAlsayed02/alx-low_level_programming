#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printing all neutral numbers from n to 98
 * @n: starting number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_to_98(int n)
{
	int sum  = n;
	int sign = 1;

	if (n > 98)
		sign = -1;

	while (sum != 98)
	{
		printf("%d, ", sum);
		sum += sign;
	}
	printf("%d\n", 98);
}
