#include <stdio.h>
/**
 * main - function prints the required text and returns 0
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			for (c = b + 1; c <= '9'; c++)
			{
				for (d = c + 1; d <= '9'; d++)
				{
				putchar(a);
				putchar(b);
				putchar(' ');
				putchar(c);
				putchar(d);
				if (a != '7')
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
