#include <stdio.h>
#include <stdlib.h>
/**
 * main - Drivers code by MOB
 * Description: Prints all alphabets except e and q
 * Return: returns 0 at the end of the program
 */
int main(void)
{
	char test;

	for (test = 'a'; test <= 'z'; test++)
	{
		if (test == 'e' || test == 'q')
			continue;
		putchar(test);
	}
	putchar('\n');
	return (0);
}
