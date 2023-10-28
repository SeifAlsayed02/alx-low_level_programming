#include "main.h"
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 *
 * Return: None.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int check = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				check = 1;
				break;
			}
		}

		if (check == 1)
			break;
		sum += atoi(argv[i]);
	}

	if (check == 0)
		printf("%d\n", sum);
	else
		printf("Error\n");

	return (check);
}
