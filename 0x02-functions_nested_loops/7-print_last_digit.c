#include "holberton.h"

/**
 * print_last_digit- prints last digit
 * @lastdigit: last number
 * Return: 0
 */

int print_last_digit(int lastdigit)
{
	lastdigit = lastdigit % 10;
	if (lastdigit < 0)
		lastdigit = -lastdigit;
		_putchar(lastdigit + '0');
		return (lastdigit);
}
