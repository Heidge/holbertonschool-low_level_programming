#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 97;i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i <= 97; i++)
			printf("%d, ", i);
	}
	printf("%d", i);
	printf("\n");
}
