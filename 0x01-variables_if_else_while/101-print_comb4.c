#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print all possible combinations of three digits
 * Return: 0 for success
 */
int main(void)
{
	int c, i, t;

	for (c = 0; c < 8; c++)
	{
		for (i = c + 1; i < 9; i++)
		{
			for (t = i + 1; t < 10; t++)
			{
				putchar((c % 10) + '0');
				putchar((i % 10) + '0');
				putchar((t % 10) + '0');

				if (c == 7 && i == 8 && t == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
