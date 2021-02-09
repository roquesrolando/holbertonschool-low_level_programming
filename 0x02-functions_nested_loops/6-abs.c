#include "holberton.h"

/**
 * _abs - gives the absolute value
 * @mod: number tested
 * Return: 0
 */

int _abs(int mod)
{
	if (mod > 0)
	{
		return (mod);
	}
	else if (mod < 0)
	{
		return (mod * -1);
	}
	else
	{
		return (0);
	}
}
