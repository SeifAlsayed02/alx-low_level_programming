#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c[] = "_putchar";


	int size = sizeof(c);

	int i;

	for (i = 0; i < size - 1; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);


}
