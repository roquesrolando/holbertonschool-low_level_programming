#include<stdio.h>
/**
* main - function prints the required text and returns 0
* Return: 0
*/
int main(void)
{
int intType;
float floatType;
char charType;
long longType;
long long longlongType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long: %zu byte\n", sizeof(longType));
printf("Size of long long: %zu byte\n", sizeof(longlongType));
return (0);
}
