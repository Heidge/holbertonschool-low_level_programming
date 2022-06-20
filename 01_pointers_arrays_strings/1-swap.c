#include "main.h"
/**
*swap_int - function
*@a: ptr 1
*@b: ptr2
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
