#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - function prints the required text and returns 0
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else if (n < 0)
{
	printrf("%d is negative\n", n);
}
	return (0);

}
