#include "main.h"

/**
 * swap_int - swaps the value of a and b
 * @a : holds the address of a
 * @b : holds the address of b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *tmp;
}
