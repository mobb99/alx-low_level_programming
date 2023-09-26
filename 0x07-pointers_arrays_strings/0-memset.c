#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s : pointer to the memory area
 * @b : constant char used to fill
 * @n : number of bytes to write
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
