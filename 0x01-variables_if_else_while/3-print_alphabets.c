#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Prints all alphabets both in lowercase and uppercase
 * Return: returns 0 as success
 */
int main(void)
{
	char test;

	for (test = 'a'; test <= 'z'; test++)
	{
		putchar(test);
	}
	for (test = 'A'; test <= 'Z'; test++)
	{
		putchar(test);
	}
	putchar('\n');
	return (0);
}
