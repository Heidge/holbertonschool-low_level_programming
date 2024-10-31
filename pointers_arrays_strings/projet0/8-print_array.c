#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array of int
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
