#include <stdio.h>
#include "holberton.h"

/**
 * main - print number of aegument
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
