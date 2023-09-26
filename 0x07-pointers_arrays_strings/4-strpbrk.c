#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  locates the first occurrence in the string s of accepted chars
 * @s : a string s
 * @accept : accepted chars
 *
 * Return: pointer to first occurance or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0;
	int c;

	for (; *(s + j) != '\n'; j++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
		if (accept[c] == s[j])
		{
			return (s + j);
		}
		}
	}
	return (NULL);
}
