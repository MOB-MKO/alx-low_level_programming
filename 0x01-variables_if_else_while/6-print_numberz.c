#include <stdio.h>
/**
 * main - Drivers code by MOB
 * Description: Print numbers from 0 to 9 with putchar
 * Return: 0 for success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
