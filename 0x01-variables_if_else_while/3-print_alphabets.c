#include <stdio.h>
/**
* main - For loop that prints the alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
char a;
char A;

	for (a = 'a' ; a <= 'z' ; a++)
{
	putchar(a);
}
	for (A = 'A' ; A <= 'Z' ; A++)
{
	putchar(A);
}
	putchar('\n');
	return (0);
}
