#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo = 'a';
	char up = 'A';
	int ttlLO = lo + 26;
	int ttlUP = up + 26;

	while (lo < ttlLO)
		putchar(lo++);

	while (up < ttlUP)
		putchar(u++);

	putchar('\n');
	return (0);
}
