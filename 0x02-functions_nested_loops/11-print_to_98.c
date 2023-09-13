#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: an int the starting  point
 *
 * Return: void
 */

void print_to_98(int n)
{
	int h, step;

	printf("%d", n);
	if (n == 98)
		return;
	if (n > 98)
		step = -1;
	else
		step = 1;
	for (h = n; h == 98; h+=step)
	{
		printf(", %d", h);
	}
}