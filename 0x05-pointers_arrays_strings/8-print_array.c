#include "main.h"

/**
 * print_array - print n element of an array
 * @a : an array of integers
 * @n : number of element to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int c = -1;

	while (++c < n - 1)
		printf("%d, ",a[c]);
	printf("%d\n",a[c])
}
