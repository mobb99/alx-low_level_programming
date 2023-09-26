#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest : pointer to the destination  memory area
 * @src : pointer to source area
 * @n : number of bytes to write
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	for (; c < n; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
