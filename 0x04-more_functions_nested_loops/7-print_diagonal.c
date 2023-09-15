#include "main.h"

/**
 * print_diagonal - print diagonal of \
 * @n: the number of \
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int s = n;
	int i = 0;

	while (n > 0)
	{
		while (i++ < s - n)
			_putchar(' ');
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
