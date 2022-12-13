#include <stdio.h>
/**
 * main - Drivers code by MOB
 * Description: Write a program that prints _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char msg[] = "_putchar\n";
	int m;

	for (m = 0; m < 5; m++)
	{
		if (msg[m] == '\n')
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(msg[m]);
		}
	}
	return (0);
}
