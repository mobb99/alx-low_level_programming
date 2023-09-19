#include "main.h"

/**
 * rev_string - reverse the characters in a given string
 * @s : a string type char *
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0;
	int len;
	char tmp;

	while (s[l] != '\0')
		l++;
	len = l;
	l = 0;
	while (l < len)
	{
		tmp = s[l];
		s[l] = s[len - l - 1];
		s[len - l - 1] = tmp;
		l++;
	}
}
