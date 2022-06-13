#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_diagonal(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
