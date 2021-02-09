#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_to_98 - print all number
 * @start: starting point
 * Return: 0
 */

void print_to_98(int start)
{
	if (start <= 98)
	{
		for (start = start; start <= 97; start++)
			printf("%d, ", start);
	}
	else
		for (start = start; start > 98; start--)
			printf("%d, ", start);
	printf("98\n");
}
