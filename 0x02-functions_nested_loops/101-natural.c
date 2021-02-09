#include <stdio.h>
int main(void)
{
	int num = 3;
	int three;
	int five;
	int total = 0;
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
	printf("%i ", total);
	printf(" \n");
}
