#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The character to check the sign
 *
 * Return: On success 1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}



}
