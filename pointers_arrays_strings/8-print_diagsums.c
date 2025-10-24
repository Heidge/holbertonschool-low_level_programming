#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of square matrix of integer
 * @a: The pointer to the array
 * @size: size of each array (same size for all)
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (size % 2 != 0)
		{
			if (i == (size * size - 1) / 2)
			{
				sum_1 += a[i];
				sum_2 += a[i];
			}
			else if (i % (size + 1) == 0)
				sum_1 += a[i];
			else if (i % (size - 1) == 0)
				sum_2 += a[i];
		}
		else
		{
			if (i % (size + 1) == 0)
				sum_1 += a[i];
			else if (i % (size - 1) == 0)
				sum_2 += a[i];
		}

	}
	printf("%d, %d\n", sum_1, sum_2);
}
