#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 0; c < 98; c++)
	{
		_putchar((char *)c);
	}
	_putchar((char *)10);
}
