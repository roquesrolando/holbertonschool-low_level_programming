#include "holberton.h"
/**
 * _atoi - turn string to int
 * @s: string to be converted
 * Return: Converted num
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;
	int ok = 0;

	while (ok == 0)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - 48);
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				ok = 0;
			else
				ok = 1;
		}
		i++;
	}
	return (num * sign);
}
