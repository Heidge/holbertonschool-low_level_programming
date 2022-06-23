/**
 * create_array - function
 *
 * @size: number of arg
 * @c: value of arg
 * Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	return (NULL);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

