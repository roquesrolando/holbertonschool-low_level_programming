#include "holberton.h"
/**
 * more_numbers - function multiplies two intergers
 *
 * Return: numbers
 */
void more_numbers(void)
{
	int num;
	int total;

	for (total = 0; total < 10; total++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
