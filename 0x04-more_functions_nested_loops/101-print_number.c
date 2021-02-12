#include "holberton.h"

/**
 * print_number - print interger
 * @n: the number
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num == 0)
	{
		_putchar(num + '0');
	}
	else if (num <= 99)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num <= 999)
	{
		_putchar(((num / 10) / 10) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
	else if (num >= 999)
	{
		_putchar((((num / 10) / 10) / 10) + '0');
		_putchar((((num / 10) / 10) % 10) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
