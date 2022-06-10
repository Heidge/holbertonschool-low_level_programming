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
			if (y <= 8)
			{
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (y == 9)
			{
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
