#include <stdio.h>
/**
* main - function prints the required text and returns 0
* Return: 0
*/
int main(void)
{
	char a;
	int n;

	for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
	for (a = 'a' ; a <= 'f' ; a++)
{
	putchar(a);
}
	putchar ('\n');
	return (0);
}
