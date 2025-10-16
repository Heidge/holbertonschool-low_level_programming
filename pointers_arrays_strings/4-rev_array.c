#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
