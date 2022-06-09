#include "main.h"
/*
*
*
*/
int main(void)
{
char str[8] = "_putchar";
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
