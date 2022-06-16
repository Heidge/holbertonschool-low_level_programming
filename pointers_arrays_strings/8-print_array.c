#include "main.h"
/**
* print_array - function
*@a: string
*@n: index of array
*/
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x < 4)
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}
