#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - amount of coins needed
 * @argc: count
 * @argv: vectors
 *
 * Return: number of coins needed
 */
int main(int argc, char *argv[])
{
	int coins, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	while (change >= 25)
	{
		change -= 25;
		coins++;
	}
	while (change >= 10)
	{
		change -= 10;
		coins++;
	}
	while (change >= 5)
	{
		change -= 5;
		coins++;
	}
	while (change >= 2)
	{
		change -= 2;
		coins++;
	}
	while (change >= 1)
	{
		change -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
