#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: an int n
 *
 * Return: 1 if gt 0,0 if 0, -1 if lt 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
