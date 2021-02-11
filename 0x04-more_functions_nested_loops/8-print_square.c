#include "holberton.h"

/**
 * print_square - prints a square character
 * @big: how big the square is
 */

void print_square(int big)
{
	int wide;
	int lenght;

	if (big > 0)
	{
		for (lenght = 0; lenght < big; lenght++)
		{
			for (wide = 0; wide < big; wide++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
