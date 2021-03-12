#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: count
 * @argv: vector
 *
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	char *code;
	int i, bts;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	code = (char *)&main;
	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bts - 1; i++)
	{
		printf("%02hhx ", code[i]);
	}
	printf("%02hhx\n", code[i]);
	return (0);
}
