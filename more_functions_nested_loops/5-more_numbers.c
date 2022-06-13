#include "main.h"
/**
* more_numbers - function
*/
void more_numbers(void)
{
	int loopone, looptwo;

	for (loopone = 0; loopone <= 9; loopone++)
	{
		for (looptwo = 0; looptwo <= 14; looptwo++)
		{
			if (looptwo > 9)
				_putchar((looptwo / 10) + '0');
			_putchar((looptwo % 10) + '0');
		}
		_putchar('\n');
	}
}



