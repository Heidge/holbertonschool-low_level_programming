#include "main.h"
/**
* swap_int - function
*@n: times print
*/
void swap_int(int *a, int *b)
{
	*a = *b;
	*a = 98;
	*b = *a;
	*a = 42;
}
