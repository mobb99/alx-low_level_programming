#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s : a string s
 * @accept : accepted chars
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int c;
	int found = 0;

	for (; *(s + j) != '\n'; j++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
		if (accept[c] == s[j])
		{
			found = 1;
			break;
		}
		return (j);
		}
	}
	if (found == 1)
		return (j);
	return (0);
}
