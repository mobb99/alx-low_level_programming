#include "main.h"

/**
 * _strdup - creates an array in memory, copy a string to it. return pointer
 * @str : the str to copy
 *
 * Return: a pointer to the string or null if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	int c = 0;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);
	while (str[c] != '\0')
	{
		ptr[c] = str[c];
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
