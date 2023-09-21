#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array of int
 * @a : pointer to the array
 * @n : size of a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c = 0;
	int tmp;

	while (c < n / 2)
	{
		tmp = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = tmp;
		c++;
	}
}
