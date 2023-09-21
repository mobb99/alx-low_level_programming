#include "main.h"
#include <stdio.h>

/**
 * _strcat - append the content of src to dest overwriting (\0)
 * @src : the source string
 * @dest : the destination
 *
 * Return: rhe pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int x = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[x] != '\0')
	{
		dest[c] = src[x];
		c++;
		x++;
	}
	dest[c] = src[x];
	return (dest);
}
