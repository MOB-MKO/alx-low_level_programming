#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Prints all alphabets
 * Return: 0 means success
 */
int main(void)
{
	char test;

	for (test = 'a'; test <= 'z'; test++)
	{
		putchar(test);
	}
	putchar('\n');
	return (0);
}
