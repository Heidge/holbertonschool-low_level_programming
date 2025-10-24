#include "main.h"

void free_all(int **ptr, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j = 0;

	array = malloc(sizeof(int*) * height);

	if (!array || width <= 0 || height <= 0)
		return NULL;

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free_all(array, height);
			return NULL;
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
