#include "main.h"

/**
 * _strlen - return the length of a string
 * @s : a string type char *
 *
 * Return: the length of the string str
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
