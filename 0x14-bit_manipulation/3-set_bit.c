#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Number
 * @index: index
 *
 * Return: None.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if ((sizeof(unsigned long int) * 8) <= index)
	{
		i = -1;
		return (i);
	}


	*n = *n | 1 << index;
	return (1);
}
