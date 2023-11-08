#include "3-calc.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int);
	int x, y, Z;
	char *f;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = argv[2];
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_func = get_op_func(f);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((f[0] == '/' || f[0] == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	z = op_func(x, y);
	printf("%d\n", z);
	return (0);
}
