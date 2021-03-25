#include "holberton.h"

/**
 * get_bit - get index on binary number
 * @n: number
 * @index: index of the number
 *
 * Return: the number at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int len;

	len = _strlen(n);
	if (len < index)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;

	return (n & 1);
}

/**
 *
 *
 *
 */

int _strlen(unsigned long int n)
{
	int count = 1;

	if ((n / 2) > 0)
	{
		count += _strlen(n / 2);
	}
	return (count);
}
