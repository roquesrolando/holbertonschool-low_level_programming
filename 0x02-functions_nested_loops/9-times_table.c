#include "holberton.h"
/**
 * times_table - function prints multiples of 9
 *
 * Return: 0
 */

void times_table(void)
{
	int num;
	int multi;
	int nine;


	for (num = 0; num < 10; num++)

	{
		_putchar('0');

		for (multi = 1; multi < 10; multi++)
		{
			_putchar(44);
			_putchar(32);

			nine = num * multi;

			if (nine < 10)
				_putchar(32);

			else
				_putchar((nine / 10) + '0');

			_putchar((nine % 10) + '0');
		}

		_putchar('\n');
	}
}


