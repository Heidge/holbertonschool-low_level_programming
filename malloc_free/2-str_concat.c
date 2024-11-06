#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	int i, j = 0;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
