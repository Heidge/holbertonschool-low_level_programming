#include "main.h"
/**
* print_line - function
*@n: times print
*/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

