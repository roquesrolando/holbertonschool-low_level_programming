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

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	len = _strlen(n);
	if (len - 1 < index)
		return (0);

	for (i = 0; i < index; i++)
		n = n >> 1;

	return (n & 1);
}

/**
 * _strlen - get the lenght of the binary
 * @n: the number
 *
 * Return: the lenght
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
