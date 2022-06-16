#include "main.h"
/**
* rev_string - function
*@s: string
*/
void rev_string(char *s)
{
	char temp;
	int count, j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

		len = len - 1;

	for (count = 0, j = len; count < j; count++, j--)
	{
		temp = s[j];
		s[j] = s[count];
		s[count] = temp;
	}
}
/**
 * source - https://slaystudy.com/c-program-to-reverse-a-string-without-using-
 * string-functions/
 *
 */
