#include "main.h"
/**
* _strchr - function
*@s: parameter 1
*@c: parameter 2
*Return: result
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j ,pos, flg = 0;

	while (*(s + i))
	{
		i++;
	}

	pos = i;

	while(*(accept + i))
	{
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flg == 1)
	return (&s[pos]);
	return ('\0');
}
