#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy atmost n bytes from  src to dest overwriting it
 * @src : the source string
 * @dest : the destination
 * @n : number of bytes to copy
 *
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[x];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
