#include "main.h"

/**
 * print_square - print a square of sizexsize
 * @size: length
 *
 * Return: void
 */

void print_square(int size)
{
	int c = size;
	int l = size;

	while (l > 0)
	{
	c = size;
	while (c > 0)
	{
		_putchar('#');
		c--;
	}
	_putchar('\n');
	l--;
	}
	_putchar('\n');

}
