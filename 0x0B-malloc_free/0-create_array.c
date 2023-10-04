#include "main.h"

/**
 * create_array - creates an array of chars initialized with a char c
 * @size : size of the array
 * @c : the char used for init
 *
 * Return: a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	while (size > 0)
		ptr[--size] = c;
	return (ptr);
}
