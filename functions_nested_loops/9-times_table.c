#include "main.h"
/**
 *times_table - tables de multiplications jusqu'a 9
 *
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
		_putchar(x * y / 10 + '0');
		_putchar(x * y % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}
		_putchar('\n');
	}
}
