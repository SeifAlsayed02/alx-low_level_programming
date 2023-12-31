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
	int num;
	int result = 0;
	int i = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	}
	printf("%d\n", result);
	return (0);
}
