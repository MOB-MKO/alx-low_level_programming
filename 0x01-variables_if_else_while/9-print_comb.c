#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Print all possible combinations of single-digit numbers
 * Return: 0 for success
 */
int main(void)
{
	int test;

	for (test = 0; test <= 9; test++)
	{
		putchar(test + '0');
		if (test < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
