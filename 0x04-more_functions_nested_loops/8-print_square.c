#include "main.h"

/**
 * print_line - print a libe of n _
 * @n: the number of _
 *
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
