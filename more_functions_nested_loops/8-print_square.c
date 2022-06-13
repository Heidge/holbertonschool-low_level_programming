#include "main.h"
/**
* print_diagonal - function
*@n: times print
*/
void print_square(int size)
{
	int x;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
	}

	_putchar('\n');
}

