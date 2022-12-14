#include "main.h"
/**
 * print_sign -Entry point
 * @n: carrier variable
 * Description: prints sign of a number
 * Return: 1 for if condition is true
 */
int  print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
