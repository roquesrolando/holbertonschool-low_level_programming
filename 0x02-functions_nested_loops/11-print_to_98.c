#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

/**
 * print_to_98 - print all number
 * start: starting point
 * Return: 0
 */

void print_to_98(int start)
{
	if (start <= 98)
	{
		for (start = start; start <= 97; start ++)
			printf("%d, ", start);
	}
	else
		for (start = start; start > 98; start--)
			printf("%d, ", start);
	printf("98\n");
}
