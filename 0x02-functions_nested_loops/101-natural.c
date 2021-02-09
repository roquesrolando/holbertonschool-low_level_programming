#include <stdio.h>

/**
 * main - prints out the sum
 * Return: 0
 */

int main(void)
{
	int num;
	int three;
	int five;
	int total;

	num = 3;
	total = 0;
	while (num < 1024)
	{
		three = num % 3;
		five = num % 5;
		if (three == 0 || five == 0)
		{
			total += num;
		}
		num++;
	}
	printf("%i \n", total);
	return (0);
}
