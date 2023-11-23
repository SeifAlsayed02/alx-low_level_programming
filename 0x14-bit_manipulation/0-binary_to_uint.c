#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 *
 * Return: Unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (num);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = num * 2 + (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (num);
}
