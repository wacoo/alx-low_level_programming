#include "main.h"

/**
 * alloc_grid - returns a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2d array
 *
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		arr[j] = malloc(width * sizeof(int));
		if (arr[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
