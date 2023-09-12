#include "main.h"

/**
 * print_last_digit - print last digit of an int
 * @n: an int n
 *
 * Return: returns the last digit of n
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n + 1000;
	l =  n % 10 + 48;
	_putchar(l);
	return (n % 10);
}
