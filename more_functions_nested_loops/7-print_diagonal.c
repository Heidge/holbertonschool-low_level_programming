#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

