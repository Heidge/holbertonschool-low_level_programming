#include "main.h"
/**
 * str_concat - function
 * @s1: first str
 * @s2: second str
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *array;
	int size = 0; /* déclarer car on ne sait pas ce qu'il y a dedans */

	if (s1 != NULL)
	size = strlen(s1);

	if (s2 != NULL)
	size = size + strlen(s2);

	array = malloc(sizeof(char) * (size + 1));

	if (array == NULL)
	return (NULL);

	if (size != 0)
	{
		if (s1 != NULL)
		{
			for (i = 0; *s1; i++)
			{
				array[i] = *s1;
				s1++;
			}
		}
		if (s2 != NULL)
		{
			for (; *s2; i++)
			{
				array[i] = *s2;
				s2++;
			}
		}
	}
	else
		array[0] = '\0';


	return (array);
}
