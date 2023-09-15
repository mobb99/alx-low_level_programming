#include "main.h"

/**
 * print_triangle - print a right triangle of sizexsize
 * @size: length
 *
 * Return: void
 */

void print_triangle(int size)
{
	int c;
	int l = size;

	while (l > 0)
	{
	c = 0;
	while (c < size)
	{
	if (c < l - 1)
		_putchar(' ');
	else
		_putchar('#');
	c++;
	}
	_putchar('\n');
	l--;
	}
	if (size < 1)
		_putchar('\n');

}
