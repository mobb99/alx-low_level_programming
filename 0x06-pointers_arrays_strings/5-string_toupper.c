#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lower case letters to upper
 * @str : string to modify
 *
 * Return: pointer to str
 */

char *string_toupper(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (str[c] <= 'z' && str[c] >= 'a')
			str[c] = str[c] - 'a' + 'A';
		c++;
	}
	return (str);
}
