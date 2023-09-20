#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed by src, including \0 to dest
 * @src : the source string
 * @dest : the destination
 *
 * Return: rhe pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];
	return (dest);
}
