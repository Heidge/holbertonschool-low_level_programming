#include "main.h"
/**
*_pow_recursion - function
*Return: result
*@x: number
*@y: power
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}


