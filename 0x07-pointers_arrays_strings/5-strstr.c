#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack : a string
 * @needle : subtring to be searched
 *
 * Return: pointer to the beginning of the occurance or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j = 0;
	int c;
	int notfound = 1;

	for (; *(haystack + j) != '\n'; j++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
		if (needle[c] != haystack[j + c])
		{
			break;
		}
		notfound = 0;
		}
		if (notfound)
			continue;
		return (haystack + j);
	}
	return (NULL);
}
