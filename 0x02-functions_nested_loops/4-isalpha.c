#include "main.h"

/**
 * _isalpha - check if a character is a letter
 * @c: an int c with de dec value of the character
 *
 * Return: 1 if c is a letter 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
