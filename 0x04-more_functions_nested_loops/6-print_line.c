#include "holberton.h"

/**
 * print_line - draws a line
 * @num: number of lines
 *
 */

void print_line(int num)
{
	int line;

	if (num > 0)
	{
		for (line = 0; line < num; line++)
			_putchar('_');
	}
	_putchar('\n');
}
