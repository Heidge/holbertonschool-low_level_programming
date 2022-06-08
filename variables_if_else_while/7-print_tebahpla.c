#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 122; ch >= 97; ch--)
putchar(ch);
putchar('\n');
return (0);
}
