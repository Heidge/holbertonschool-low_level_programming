#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - function.
 * @n: arg
 * @separator: separator
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int count;
	char *s;

	va_start(par, n);

	for (count = 1; count <= n; count++)
	{
		s = va_arg(par, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		if (count <= (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(par);
}
