#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - function.
 * @n: arg
 * @separator: separator
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int count;

	va_start(par, n);

	for (count = 1; count <= n; count++)
	{
		printf("%d", va_arg(par, int));
		if (count <= (n - 1) || !separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(par);
}
