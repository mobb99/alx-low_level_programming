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
	int h;

	printf("%d", n);
	for (h = n; h < 98; h++)
	{
		printf(", %d", h);
	}
}
