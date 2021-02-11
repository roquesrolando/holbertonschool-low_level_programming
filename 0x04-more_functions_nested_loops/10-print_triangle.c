#include "holberton.h"

/**
 * print_triangle - prints a square character
 * @big: how big the square is
 */

void print_triangle(int big)
{
	int space, hash;

	if (big <= 0)
		_putchar('\n');
	
	for (space = 1; space <= big; space++)
	{
		for (hash = 1; hash <= big; hash++)
		{
			if (hash <= (big - space))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
