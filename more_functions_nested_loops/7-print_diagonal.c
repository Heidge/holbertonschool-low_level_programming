#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			_putchar(' ');
		}
		if (n > 0)
		{
			_putchar('\\');
		}
		_putchar('\n');

	}
}
