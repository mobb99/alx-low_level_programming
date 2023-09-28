#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n : an integer n
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 2)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
