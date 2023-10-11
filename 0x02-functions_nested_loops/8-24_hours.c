#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: On success None
 */
void jack_bauer(void)
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;

	while (n1 != 2 || n2 != 4)
	{
		_putchar(n1 + 48);
		_putchar(n2 + 48);
		_putchar(58);
		_putchar(n3 + 48);
		_putchar(n4 + 48);
		_putchar('\n');
		n4++;

		if (n4 == 10)
		{
			n3++;
			n4 = 0;
		}
		if (n3 == 6)
		{
			n2++;
			n3 = 0;
		}
		if (n2 == 10)
		{
			n1++;
			n2 = 0;
		}

	}

}
