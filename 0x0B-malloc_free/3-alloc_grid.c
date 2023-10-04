#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : first dimension
 * @height : second dimension
 *
 * Return: a pointer to the string or null if it fails
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int) * width * height + height * 8);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}
	}
	return (ptr);
}
