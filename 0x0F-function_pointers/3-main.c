#include "3-calc.h"

/**
 * main - perform simple operations
 * @argc: count
 * @argv: vectors
 *
 * Return: result of simple operations
 */

int main(int argc, char *argv[])
{
	int (*num)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num = get_op_func(argv[2]);

	if (num == 0)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", num(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
