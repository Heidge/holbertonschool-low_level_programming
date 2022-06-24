#include "main.h"
/**
*_sqrt_result - function 2
*Return: result
*@y: test number
*@x: number n
*/
int test_pn(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (y * y > x)
	{
		return(1);
	}

	return (test_pn(x, y + 1));
}

int is_prime_number(int n)
{
	int y;

	y = 2;
	if (n <= 1)
	{
		return (0);
	}
	return (test_pn(n, y));
}
