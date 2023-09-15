#include "main.h"

/**
 * print_diagonal - print diagonal of slashes
 * @n: the number lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int s = n;
	int i = 0;

	while (s > 0)
	{
		i = 0;
		while (i++ < n - s)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		s--;
	}
	if (n < 1)
		_putchar('\n');
}
