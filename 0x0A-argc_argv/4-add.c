#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;
	int num = 0;
	int inc;
	char *str;

		for (count = 1; count < argc; count++)
		{
			str = argv[count];

			for (inc = 0; str[inc] != '\0'; inc++)
			{
				num = isdigit(str[inc]);
				if (num == 0)
				{
					printf("Error\n");
					return (0);
				}
			}
			sum += atoi(str);
		}
	printf("%d\n", sum);
	return (0);
}
