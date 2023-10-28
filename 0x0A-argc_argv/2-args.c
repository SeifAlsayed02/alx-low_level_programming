#include "main.h"
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 *
 * Return: None.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
