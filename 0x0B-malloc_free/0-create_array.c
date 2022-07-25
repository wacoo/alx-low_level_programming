#include "main.h"

/**
 * create_array - allocates a memory space and fills it with given character.
 * @size:size if memory space
 * @c: character given
 *
 * Return: null or memolry space allocated
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	else if (size > 0)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
	else
	{
		return ('\0');
	}
	free(arr);
}
