#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: a pointer to the string or null if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int c = 0;

	if (s1 != NULL)
		c += strlen(s1);
	if (s2 != NULL)
		c += strlen(s2);
	ptr = malloc(sizeof(char) * c + 1);
	if (ptr == NULL)
		return (NULL);

	c = 0;
	if (s1 != NULL)
	{
	while (*s1 != '\0')
	{
		ptr[c] = *s1;
		s1++;
		c++;
	}
	}
	if (s2 != NULL)
	{
	while (*s2 != '\0')
	{
		ptr[c] = *s2;
		s2++;
		c++;
	}
	}

	ptr[c] = '\0';
	return (ptr);
}
