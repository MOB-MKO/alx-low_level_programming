#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Prints all alphabets in reverse order
 * Return: 0 for success
 */
int main(void)
{
	char test;

	for (test = 'z'; test >= 'a'; test--)
	{
		putchar(test);
	}
	putchar('\n');
	return (0);
}
