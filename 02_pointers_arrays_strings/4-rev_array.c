#include "main.h"
/**
*reverse_array - function
*@a: string
*@n: number of elemet
*Return: result or always 0
*/
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

/**
 * https://stackoverflow.com/questions/47745149/reverse-an-integer-array-in-c
 *
 */
