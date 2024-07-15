#include "main.h"

/**
 * _abs - function for compute and return the absolute value of an integer
 * Return: absolute value of an integr
 */
int _abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (number * -1);
}
