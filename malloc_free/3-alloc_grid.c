#include "main.h"

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j= 0;

	array = malloc(sizeof(int*) * height);

	if (!array || width <= 0 || height <= 0)
		return NULL;

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
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
