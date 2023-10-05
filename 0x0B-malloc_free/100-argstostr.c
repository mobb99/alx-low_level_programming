#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac : arguments count
 * @av : arguments values array strings
 *
 * Return: a pointer to the string or null if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	char *s;
	int c = 0;
	int len = 0;
	int i = 0;

	if (av == NULL || ac == 0)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		len += strlen(av[c]) + 1;
	}
	len++;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < ac; c++)
	{
	s = av[c];
	while (*s != '\0')
	{
		ptr[i] = *s;
		i++;
	}
	ptr[i++] = '\n';
	}
	ptr[i] = '\0';

	return (ptr);
}
