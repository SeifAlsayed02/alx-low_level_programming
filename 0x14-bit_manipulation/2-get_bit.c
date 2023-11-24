#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number
 * @index: index
 *
 * Return: None.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x = 0;

	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);

	x = (n >> index) & 1;
	return (x);
}
