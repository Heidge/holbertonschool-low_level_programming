#include "main.h"

/**
 * _abs - function for compute and return the absolute value of an integer
 * @number: the number to compute
 * Return: absolute value of an integr
 */
int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (number * -1);
}
