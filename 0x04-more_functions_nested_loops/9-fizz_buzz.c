#include "main.h"
#include <stdio.h>

/**
 * main - the fizz buzz test
 *
 * Return: 0 success
 */

int main(void)
{
	int c;

	printf("1");
	for (c = 2; c <= 100; c++)
	{
	printf(" ");
	if (c % 3 != 0 && c % 5 != 0)
		printf("%d", c);
	else
	{
	if (c % 3 == 0)
		printf("Fizz");
	if (c % 5 == 0)
		printf("Buzz");
	}

	}
	_putchar('\n');
	return (0);
}
