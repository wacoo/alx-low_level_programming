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
	int **arr, i, j, k;

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
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	       if(arr[i] == NULL)
	       {	       
		       for (i--; i >= 0; i--)
		       {
			       free(arr[i]);
		       }
		       free(arr);
		       return (NULL);
	       }		
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}
	return (arr);
}
