#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it
 * @size: Size of the array
 * @c: Charcter to be inserted
 * Return: NULL if size is zero or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
