#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Print all number of base 16 in lowercase
 * Return: 0 for success
 */
int main(void)
{
	char test;

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (test = 'a'; test <= 'f'; test++)
	{
		putchar(test);
	}
	putchar('\n');
	return (0);
}
