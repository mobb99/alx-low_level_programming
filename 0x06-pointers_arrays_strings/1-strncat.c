#include "main.h"
#include <stdio.h>

/**
 * _strncat - append atcmost n bytes from  src to dest overwriting (\0)
 * @src : the source string
 * @dest : the destination
 * @n : number of bytes to copy
 *
 * Return: rhe pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int x = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[x] != '\0' && x < n)
	{
		dest[c] = src[x];
		c++;
		x++;
	}
	if (x < n)
		dest[c] = src[x];
	return (dest);
}
