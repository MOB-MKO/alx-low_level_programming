#include "main.h"
/**
 * _islower - Entry point
 * Description: checks for lowercase character
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
