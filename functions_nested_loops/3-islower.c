#include "main.h"

int _islower(int c)
{
	int i = 97;

	for(; i <= 122; i++)
	{
		if(c == i)
			return (1);
	}

	return (0);
}
