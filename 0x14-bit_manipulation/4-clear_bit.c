#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index
 *
 * Return: None.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;

	if ((sizeof(unsigned long int) * 8) <= index)
	{
		i = -1;
		return (i);
	}
	*n = *n & ~(1 << index);
	return (1);
}
