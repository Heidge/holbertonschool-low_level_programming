#include "main.h"

int _isalpha(int c)
{
	int i = 65;

	for (; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
