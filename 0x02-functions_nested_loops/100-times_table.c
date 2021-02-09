#include "holberton.h"
/**
 * times_table - function prints multiples of 9
 *
 * @r: valued being sent
 */

void print_times_tablet(int n)
{
	int num;
	int multi;
	int total;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(44);
				_putchar(32);

				total = num * multi;

				if (total <= 99)
					_putchar(32);

				if (total <= 9)

					_putchar(32);

				if (total >= 100)
				{
					_putchar((total / 100) + '0');
					_putchar(((total / 10)) % 10 + '0');
				}
				else if (total <= 99 && total >= 10)
				{
					_putchar((total / 10) + '0');
				}
				_putchar((total % 10) + '0');
			}

			_putchar('\n');
		}
	}
}
