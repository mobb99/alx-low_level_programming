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
	void *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	return (ptr);
}
