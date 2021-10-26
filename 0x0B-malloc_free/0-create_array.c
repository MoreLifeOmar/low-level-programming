#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Create an array of chars
 * Initialze it with a specific char
 * Return NULL if size = 0
 * Return pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
			if (array != NULL)
			{
				for (i = 0; i < size; i++)
					array[i] = c;
			}
		}
	return (array);
}
