#include "holberton.h"

/**
 * times_table - prints the times table of an integer starting with zero
 * @r: times table is being printed
 * Return: Always 0.
 */

void times_table(int r)
{
	int x, y, product;

	if (r >= 0 && r <= 15)
	{
		for (x = 0; x <= r; x++)
		{
			_putchar('0');

			for (y = 1; y <= r; y++)
			{
				_putchar(',');
				_putchar(' ');

				product = x * y;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar ((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
