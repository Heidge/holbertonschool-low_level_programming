#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_diagonal(int n)
{
	int y;
	int x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(' ');
		}
		for (y= 0; y <= n; y++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}

