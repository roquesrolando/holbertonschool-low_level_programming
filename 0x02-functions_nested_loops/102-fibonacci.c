#include <stdio.h>
/*
 * main - prints fibonacci
 *
 */

int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, fib3, num, count = 0;

	num = 50;

	printf("%lu, ", fib1);

	printf("%lu, ", fib2);

	count = 2;

	while (count < num)

	{

		fib3 = fib1 + fib2;

		count++;

		printf("%lu, ", fib3);

		fib1 = fib2;

		fib2 = fib3;
	}
	printf("\n");
}
