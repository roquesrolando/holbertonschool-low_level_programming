#include "holberton.h"

/**
 * more_numbers - prints from 0-14
 */

void more_numbers(void)
{
	int num, total;

	for (total = 0; total <= 10; total++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
