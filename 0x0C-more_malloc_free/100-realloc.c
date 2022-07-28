#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies a memory block to another
 * @dest: destination address
 * @src: source address
 * @size: size tobe copied
 *
 * Return: Nothing.
 */
void _memcpy(void *dest, void *src, unsigned int size)
{
	unsigned int i;
	char *ndest = (char *) dest;
	char *nsrc = (char *) src;

	for (i = 0; i < size; i++)
	{
		ndest[i] = nsrc[i];
	}
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory space
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: ptr
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ns;

	if (ptr == NULL)
	{
		ns = malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		if (new_size == old_size)
		{
			return (ptr);
		}
		else if (new_size > old_size)
		{
			ns = malloc(new_size);
			if (ns == NULL)
			{
				return (NULL);
			}
			_memcpy(ns, ptr, old_size);
			free(ptr);
		}
	}
	return (ns);
}
