#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point
* @argc: number of args
* @argv: array contain args
*
* Return: Always 0 (success)
*/

int (*get_op_func(char *s))(int, int);

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int x, y, ans;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ans = op_func(x, y);
	printf("%d\n", ans);
	return (0);
}
