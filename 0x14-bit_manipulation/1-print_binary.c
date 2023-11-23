#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit;
	int start = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		bit = n & mask;
		if (bit > 0)
			start = 1;
		if (start == 1)
		{
			_putchar(bit == 0 ? '0' : '1');
		}
		mask >>= 1;
	}
}
