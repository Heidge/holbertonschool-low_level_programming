#include "main.h"

/**
 * times_table - function for print all multiplication tables from 0 to 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j >= 10)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(((i * j) % 10) + '0');
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
