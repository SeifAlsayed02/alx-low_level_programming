#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The last digit to print
 *
 * Return: On success 1.
 */
int print_last_digit(int n)
{
	int lst = 0;

	if (n > 0)
	{
		lst = (n % 10);
		_putchar(lst + 48);
		return (lst);
	}
	else if (n < 0)
	{
		lst = (n % 10);
		lst = lst * -1;
		_putchar(lst + 48);
		return (lst);
	}
	else
	{
		_putchar(0 + 48);
		return (0);
	}



}
