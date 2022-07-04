#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function.
 * @n: arg
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	int sum = 0;
	int count;
	int compar = n;

	va_start(par, n);

	if (n == 0)
	return (0);

	for (count = 0; count < compar; count++)
	{
		sum += (int) va_arg(par, int);
	}

	va_end(par);
	return (sum);
}
