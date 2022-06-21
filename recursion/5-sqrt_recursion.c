#include "main.h"
/**
*_sqrt_result - function 2
*Return: result
*@y: test number
*@x: number n
*/
int _sqrt_result(int x, int y)
{
	if (y * y == x)
	{
	return (y);
	}
	return (_sqrt_result(x, y + 1));

}

/**
 * _sqrt_recursion - function
 * @n:number in main
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int y;

	y = 0;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_result(n, y));
}
