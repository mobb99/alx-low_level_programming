#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: neg num if s1<s2 pos if s1>s2 and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
		c++;
	}
	return (s1[c] - s2[c]);
}
