#include "main.h"
/**
* print_triangle - function
*@n: times print
*/
void print_triangle(int n)
{
	int y, x, z;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = x; y < n; y++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
