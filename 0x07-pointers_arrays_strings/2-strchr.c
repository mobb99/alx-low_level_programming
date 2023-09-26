#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s : a string
 * @c : a char to look for in s
 *
 * Return: pointer to occurance or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + j) != '\n'; j++)
	{
		if (*(s + j) == c)
			return (s + j);
	}
	return (NULL);
}
