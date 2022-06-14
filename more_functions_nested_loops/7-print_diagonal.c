#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_diagonal(int n)
{
	int y, x, z;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			for (z = 1; z <= 1; z++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


