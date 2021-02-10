#include <stdio.h>
/**
 * main - prints fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{

	float fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 100;

	printf("%.0f, ", fib1);

	printf("%.0f, ", fib2);

	count = 4;

	while (count < num)

	{
		fib3 = fib1 + fib2;

		count++;

		printf("%.0f", fib3);

		fib1 = fib2;

		fib2 = fib3;
		if (count != 100)
			printf(", ");
	}
	printf("\n");
	return (0);
}
