#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The last digit to print
 *
 * Return: On success 1.
 */
int print_last_digit(int n)
{
	int lst;

	if (n != 0)
	{
	lst = (n % 10);
	_putchar('lst');
	return (lst);
	}
	else
		return (0);



}
