#include "main.h"
#include <limits.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask;
	int num_bits = sizeof(unsigned long int) * CHAR_BIT;

	for (i = num_bits - 1 ; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	_putchar('\n');
}
